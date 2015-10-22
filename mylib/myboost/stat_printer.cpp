#include <iostream>
using std::cout;  using std::endl;  using std::left;
#include <iomanip>
using std::setw;

#include "stat_printer.h"

int main() {
    cout << "Using Binomial distribution to predict how many heads and tails." << endl;

    stat_printer stp;

    cout.precision(4);
    cout << "From " << stp.flips << " one can expect to get on average "
        << stp.get_mean() << " heads (or tails)." << endl;
}
