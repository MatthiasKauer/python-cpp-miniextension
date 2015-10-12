#include <stack>
#include <iostream>

template <typename T>
class mystack{
 private:
     std::stack<T> _st;

 public:
     void put(T t);
     void print_stack();
    
};


template <typename T>
void mystack<T>::put(T t) {
    _st.push(t);
}


template <typename T>
void mystack<T>::print_stack() {

    std::cout << "C++ here!!!" << std::endl;
    while (!_st.empty()) {
        T t = _st.top(); _st.pop();
        std::cout << t << std::endl;
    }
    std::cout << "C++ over!!!" << std::endl;

}

