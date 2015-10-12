#include <iostream>
#include "factorial.h"

int main() {
    using std::cout;
    using std::endl;

    auto f = Factorial();
    cout << f.fact(5) << endl;
    cout << f.lambda_fact(8) << endl;

    std::shared_ptr<int64_t> pn = std::make_shared<int64_t>();
    *pn = 10;
    cout << *pn << endl;
    f.ptr_fact(pn);
    cout << *pn << endl;
}

