from distutils.core import setup, Extension

setup(ext_modules=[Extension("_cos_module",
      sources=["cos.c", "cos_wrap.c"])])
      # sources=["cos.c", "cos.i"])])
