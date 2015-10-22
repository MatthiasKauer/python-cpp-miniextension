#include <boost/math/distributions/binomial.hpp>
using boost::math::binomial;

class stat_printer {
 public:
     stat_printer() : 
        success_fraction(0.5),
        flips(10),
        flip(flips, success_fraction)
    {}


     double get_mean() {
         return mean(flip);
     }

     const double success_fraction; // = 50% = 1/2 for a 'fair' coin.
     int flips;
     binomial flip;
};


