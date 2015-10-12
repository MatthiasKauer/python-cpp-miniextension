%module fact
// for int64_t (and similar) use in python: http://stackoverflow.com/a/8897963
%include <stdint.i>
%{
#include "factorial.h"
%}
%include "factorial.h"
