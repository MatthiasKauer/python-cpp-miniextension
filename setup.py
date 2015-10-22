import os
from setuptools import setup, Extension, find_packages
from setuptools.command.build_ext import build_ext

packages = find_packages()
print(packages)


# compiler dependent parameters http://stackoverflow.com/a/32192172/1707931
BUILD_ARGS = {}
for compiler, args in [
        ('msvc', ['/EHsc']), #, '/DHUNSPELL_STATIC']),
        ('gcc', ['-O3', '-g0']),
        ('mingw32', ['-O3', '-g0'])]:
    BUILD_ARGS[compiler] = args

class build_ext_compiler_check(build_ext):
    def build_extensions(self):
        compiler = self.compiler.compiler_type
        print("compiler: ", compiler)
        args = BUILD_ARGS[compiler]
        for ext in self.extensions:
            ext.extra_compile_args += args
        build_ext.build_extensions(self)

setup(
    name='py_c_miniextension',
    # packages=['src'],
    # install_requires=[''],
    classifiers=['Development Status :: 3 - Alpha'],
    ext_modules=[
        # Extension('ctypes_foo_module', ['mylib/py_ctypes_foo/foo.cpp']),
        Extension('cos_module', ['mylib/py_c_interface_cos/cos_module.c']),
        Extension('_cswig_cos', ['mylib/cswig_cos/cos_wrap.c', 'mylib/cswig_cos/cos.c']),
        Extension('_fact', ['mylib/cppswig_factorial/factorial_wrap.cxx',
                            'mylib/cppswig_factorial/factorial.cpp'],
                  extra_compile_args=['-std=c++11']),
        Extension('_mystack', ['mylib/cppswig_stack/mystack.cpp', 'mylib/cppswig_stack/mystack_wrap.cxx']),
        # Boost linking: https://www.quora.com/How-do-you-distribute-Boost.Python-modules
        Extension('_stat_printer', ['mylib/myboost/stat_printer_wrap.cxx'],
                include_dirs=['C:/Libraries/boost_1_59_0'])
     ],
    packages = packages,
    cmdclass = {'build_ext' : build_ext_compiler_check},
    entry_points={'console_scripts': ['miniextension_test=mylib.script.miniextension_test:main']}
)
