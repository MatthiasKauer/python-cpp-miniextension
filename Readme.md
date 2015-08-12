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
