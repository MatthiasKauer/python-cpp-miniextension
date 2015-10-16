Builds C extensions for Python in 3 different ways.

If you have a compiler installed that your Python environment knows about, the following should work
```
python setup.py build_ext
```

The script currently works only after installation (or so I believe)
```
python setup.py install
miniextension_test
```

### ctypes
There is plenty of praise for using ctypes to wrap C code for Python.
For instance:

* http://stackoverflow.com/a/135966/1707931
* http://stackoverflow.com/a/145649/1707931

The main disadvantage I see is that it doesn't integrate well with setuptools.
This question appears to be symptomatic: http://stackoverflow.com/q/4529555/1707931


###Windows
I'm using Anaconda on Windows. Install mingw into an environment of your choice.
Then install mingw and compile with this compiler specifically
```
conda install mingw libpython
python setup.py build_ext --inplace --compiler=mingw32
```


###Regenerating swig
**Note that for some reason setup.py specifies the module as _module for it to work**
```
C:\opt\swigwin-3.0.7\swig.exe -python cos.i
```
