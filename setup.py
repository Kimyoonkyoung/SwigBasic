from distutils.core import setup, Extension

OPENCV_PREVFIX = '/usr/local/Cellar/opencv/3.3.1_1/'

example_opt = Extension("_example", ["example.i"],
                swig_opts = ['-c++', '-modern'],
                library_dirs=['/usr/local/lib', '/usr/lib/', OPENCV_PREVFIX + 'lib'],
                libraries = ['opencv_highgui'],
                include_dirs = [OPENCV_PREVFIX + 'include'])


setup (name = 'example',
       version = '0.1',
       author      = "SWIG Docs",
       description = """Simple swig example from docs""",
       ext_modules = [example_opt],
       py_modules = ["example"]
       )
