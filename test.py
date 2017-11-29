import example
import numpy
import cv2

obj = example.Math()
obj.setBasic(14)
print obj.getBasic()

#img = cv2.imread("/Users/kakao/Desktop/6.png")
img = open("/Users/kakao/Desktop/6.png", 'rb').read()

obj.setImage(img)

