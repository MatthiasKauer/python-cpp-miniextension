#include <iostream>
#include "factorial.h"

int main() {
    using std::cout;
    using std::endl;

    auto f = Factorial();
    cout << f.fact(5) << endl;
    cout << f.lambda_fact(8) << endl;
}

