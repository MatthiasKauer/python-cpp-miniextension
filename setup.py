import os
from setuptools import setup, Extension

setup(
    name='py_c_miniextension',
    packages=['src'],
    install_requires=[''],
    classifiers=['Development Status :: 3 - Alpha'],
    ext_modules=[
        Extension('py_ctypes_foo_module', ['py_ctypes_foo/foo.cpp']),
        Extension('py_c_interface_cos_module', ['py_c_interface_cos/cos_module.c']),
        Extension('py_c_swig_cos', ['py_c_swig_cos/cos_wrap.c', 'py_c_swig_cos/cos.c'])
     ],
    entry_points={'console_scripts': ['scripts.miniextension_test.main']}
)
