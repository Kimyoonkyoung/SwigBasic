import swig_basic
import json

swig_obj = swig_basic.examplepy()
swig_obj.swig_example_hello()


# image to array (python to c++)
###img = cv2.imread("/Users/kakao/Desktop/test.png")
img = open("/Users/kakao/Desktop/test.png", 'rb').read()
swig_obj.sendImageToCpp(img)


# json to string (python to c++)
jsonfile = open("/Users/kakao/Desktop/test.json").read()
data = json.loads(jsonfile)
swig_obj.sendJsonToCpp(jsonfile)


# string to json (c++ to python)


