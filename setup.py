from distutils.core import setup, Extension
setup(name='bind', version='1.0', ext_modules=[Extension('bind', ['bindmodule.c'])])
