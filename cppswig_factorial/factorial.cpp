#include <cstdint>
#include <iostream>

int64_t factorial(int64_t n) {
    auto x = n;

    for (auto i=n-1; i > 0 ; --i) {
        x *= i;
    }

    return x;
}

int main() {
    using std::cout;
    using std::endl;

    cout << factorial(5) << endl;
}

