import cv2
import numpy as np
import os
# coding=utf-8
import urllib
import urllib.request
import hashlib
import datetime
import pymysql

#加载训练数据集文件
recogizer=cv2.face.LBPHFaceRecognizer_create()
recogizer.read('trainer/trainer.yml')
names=[]
warningtime = 0

def md5(str):
    m = hashlib.md5()
    m.update(str.encode("utf8"))
    return m.hexdigest()

statusStr = {
    '0': '短信发送成功',
    '-1': '参数不全',
    '-2': '服务器空间不支持,请确认支持curl或者fsocket,联系您的空间商解决或者更换空间',
    '30': '密码错误',
    '40': '账号不存在',
    '41': '余额不足',
    '42': '账户已过期',
    '43': 'IP地址限制', 
    '50': '内容含有敏感词'
}
# 报警信息记录
def record_warning():
    now = datetime.datetime.now()
    current_time = now.strftime("%Y-%m-%d %H:%M:%S")
    # Connect to MySQL database
    connection = pymysql.connect(host='localhost',
                                 user='root',
                                 password='75259516',
                                 db='user_info_db',
                                 charset='utf8mb4',
                                 cursorclass=pymysql.cursors.DictCursor)
    try:
        with connection.cursor() as cursor:
            sql = "INSERT INTO user_warning (warning_time, warning_count) VALUES (%s, %s)"
            cursor.execute(sql, (current_time, warningtime))
        connection.commit()
    finally:
        connection.close()
# 报警信息提醒
def warning():
    smsapi = "http://api.smsbao.com/"
    # 短信平台账号
    user = 'bennaifei'
    # 短信平台密码
    password =  'a4b241402c8841e4b7d0ea72f9868420'
    # 要发送的短信内容
    content = '【报警】\n原因:检测到未知人员\n地点:xxx'
    # 要发送短信的手机号码
    phone = '15517602365'

    data = urllib.parse.urlencode({'u': user, 'p': password, 'm': phone, 'c': content})
    send_url = smsapi + 'sms?' + data
    response = urllib.request.urlopen(send_url)
    the_page = response.read().decode('utf-8')
    print(statusStr[the_page])

#准备识别的图片
def face_detect_demo(img):
    gray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)#转换为灰度
    face_detector=cv2.CascadeClassifier('./venv/lib/python3.10/site-packages/cv2/data/haarcascade_frontalface_alt2.xml')
    face=face_detector.detectMultiScale(gray,1.1,5,cv2.CASCADE_SCALE_IMAGE,(100,100),(300,300))
    #face=face_detector.detectMultiScale(gray)
    for x,y,w,h in face:
        cv2.rectangle(img,(x,y),(x+w,y+h),color=(0,0,255),thickness=2)
        cv2.circle(img,center=(x+w//2,y+h//2),radius=w//2,color=(0,255,0),thickness=1)
        # 人脸识别
        ids, confidence = recogizer.predict(gray[y:y + h, x:x + w])
        print('标签id:',ids,'置信评分：', confidence)

        #报警次数过多执行报警功能
        if confidence > 80:
            global warningtime
            warningtime += 1
        if warningtime > 100:
            record_warning()
            warningtime = 0
            warning()
            cv2.putText(img, 'unkonw', (x + 10, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.75, (0, 255, 0), 1)
        else:
            cv2.putText(img,(names[ids-1]), (x + 10, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.75, (0, 255, 0), 1)
    cv2.imshow('result',img)
    #print('bug:',ids)

def name():
    path = './data/jm/'
    #names = []
    imagePaths=[os.path.join(path,f) for f in os.listdir(path)]
    for imagePath in imagePaths:
       name = (os.path.split(imagePath)[1].split('.',2)[1])
       names.append(str(name))


cap=cv2.VideoCapture(0)
name()
while True:
    flag,frame=cap.read()
    if not flag:
        break
    face_detect_demo(frame)
    key = cv2.waitKey(10)
    if key == ord('q') or key == 27:  # 'q' 或 'esc'键结束进程
        break
cv2.destroyAllWindows()
cap.release()