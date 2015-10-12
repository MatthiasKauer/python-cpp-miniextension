#include <cstdint>
#include <vector>
#include <functional>
#include <numeric>
#include <iostream>
#include <memory>

// testing C++11 features from gcc list https://gcc.gnu.org/projects/cxx0x.html
// these will only work from Python 3.5 onwards, I suppose:
// https://ci.appveyor.com/project/MatthiasKauer/python-cpp-miniextension/build/ionelmc-appveyor-20

/* most important for me: 
 * auto (done)
 * lambda (done)
 * <cstdint> (done)
 * initializer lists (done)
 * shared & unique_ptr
*/


class Factorial {
 private:
     int32_t _first_val;

 public:
     Factorial() : _first_val(1) {}

     int64_t fact(int64_t n) {
         auto x = _first_val;

         for (auto i=_first_val+1; i <= n ; ++i) {
             x *= i;
         }

         return x;
     }

     int64_t lambda_fact(int64_t n) {
         std::vector<int64_t> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

         std::cout << "largest elem: " << v.back() << std::endl;
         if (n > v.back()) {
             std::cout << "sorry, haven't saved enough" << std::endl;
             return -1;
         }

         // int64_t prod1 = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int64_t>());
         auto mult_lambda = [](int64_t l, int64_t r) {return l * r;};
         int64_t prod2 = std::accumulate(v.begin(), v.end(), 1, mult_lambda);
         return prod2;
     }

     void ptr_fact(std::shared_ptr<int64_t> pn){
         auto n = *pn;
         
         *pn = this->fact(n);
     }
};

