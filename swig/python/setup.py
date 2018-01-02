import setuptools.command.install
import shutil
from distutils.sysconfig import get_python_lib


class CompiledLibInstall(setuptools.command.install.install):
    """
    Specialized install to install to python libs
    """

    def run(self):
        """
        Run method called by setup
        :return:
        """
        # Get filenames from CMake variable
        filenames = '/Users/kakao/Kimyoonkyoung/3.Project/SwigBasic/swig/python/swig_basic.py;/Users/kakao/Kimyoonkyoung/3.Project/SwigBasic/swig/python/_swig_basic.so'.split(';')

        # Directory to install to
        install_dir = get_python_lib()

        # Install files
        [shutil.copy(filename, install_dir) for filename in filenames]


if __name__ == '__main__':
    setuptools.setup(
        name='swig-example',
        version='1.0.0-dev',
        packages=['swig-example'],
        license='Apache License 2.0',
        author='Kim yoon kyoung',
        author_email='_dbsrud@daum.net',
        cmdclass={'install': CompiledLibInstall}
    )
