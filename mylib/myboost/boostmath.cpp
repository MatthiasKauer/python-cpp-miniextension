#include <boost/math/distributions/binomial.hpp>
using boost::math::binomial;


#include <iostream>
using std::cout;  using std::endl;  using std::left;
#include <iomanip>
using std::setw;

class stat_printer {
 public:
     stat_printer() : flips(10),
        success_fraction(0.5),
        flip(flips, success_fraction)
    {}


     double get_mean() {
         return mean(flip);
     }

     const double success_fraction; // = 50% = 1/2 for a 'fair' coin.
     int flips;
     binomial flip;
};

int main() {
    cout << "Using Binomial distribution to predict how many heads and tails." << endl;

    stat_printer stp;

    cout.precision(4);
    cout << "From " << stp.flips << " one can expect to get on average "
        << stp.get_mean() << " heads (or tails)." << endl;
}
