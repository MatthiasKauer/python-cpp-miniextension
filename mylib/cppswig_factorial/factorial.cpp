#include <cstdint>
#include <iostream>

//testing C++11 features from gcc list https://gcc.gnu.org/projects/cxx0x.html

/* most important for me: 
 * auto
 * lambda
 * <cstdint>
 * initializer lists
 * shared & unique_ptr
*/

class Factorial {
 private:
     int32_t _first_val;

 public:
    Factorial() : _first_val(1);

    int64_t fact(int64_t n) {
        auto x = _first_val;

        for (auto i=_first_val+1; i < n ; ++i) {
            x *= i;
        }

        return x;
    }

int main() {
    using std::cout;
    using std::endl;

    f = Factorial();
    cout << f.fact(5) << endl;
}

