import os
from setuptools import setup, Extension


setup(
    name='Simple Example',
    packages=['src'],
    install_requires=[''],
    classifiers=['Development Status :: 3 - Alpha'],
    ext_modules=[
        Extension('src',
                  ['src/foo.cpp'],
                  include_dirs=['src'],
                  library_dirs=['/'],
                 )
     ],
)
