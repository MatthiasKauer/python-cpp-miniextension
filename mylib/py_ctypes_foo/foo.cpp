// example from http://stackoverflow.com/a/145649/1707931

#include <iostream>
class Foo{
    public:
        void bar(){
            std::cout << "Hello" << std::endl;
        }
};

int main(){
    Foo f = Foo();
    f.bar();

#if __x86_64__
    std::cout << "it's 64 bit" << std::endl;
#else
    std::cout << "it's 32 bit" << std::endl;
#endif
}


extern "C" {
    Foo* Foo_new(){ return new Foo(); }
    void Foo_bar(Foo* foo){ foo->bar(); }
}
