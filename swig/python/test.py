import swig_basic
import json

swig_obj = swig_basic.examplepy()
swig_obj.swig_example_hello()
swig_obj.link_liba_hello()

# Json send test
jsonfile = open("/Users/kakao/Desktop/test.json").read()
data = json.loads(jsonfile)
swig_obj.setJson(jsonfile)