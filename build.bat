call g++ -c foo.cpp -o foo.o
call g++ -shared -Wl,-soname,libfoo.so -o libfoo.so  foo.o
