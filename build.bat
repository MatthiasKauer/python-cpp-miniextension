call "g++ -c -fPIC foo.cpp -o foo.o"
ECHO "batch still running"
g++ -shared -Wl,-soname,libfoo.so -o libfoo.so  foo.o
