import os
from setuptools import setup, Extension, find_packages

packages = find_packages()
print(packages)

setup(
    name='py_c_miniextension',
    # packages=['src'],
    # install_requires=[''],
    classifiers=['Development Status :: 3 - Alpha'],
    ext_modules=[
        # Extension('py_ctypes_foo_module', ['py_ctypes_foo/foo.cpp']),
        Extension('cos_module', ['py_c_interface_cos/cos_module.c']),
        Extension('_cswig_cos', ['cswig_cos/cos_wrap.c', 'cswig_cos/cos.c']),
        Extension('_fact', ['cppswig_factorial/factorial_wrap.cxx', 'cppswig_factorial/factorial.cpp'],
                  extra_compile_args=['-std=c++11']),
     ],
    packages = packages,
    entry_points={'console_scripts': ['miniextension_test=script.miniextension_test:main']}
)
