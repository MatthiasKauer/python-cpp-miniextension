%module mystack
%{
#include "mystack.h"
%}
%include "mystack.h"
%template(intMystack) mystack<int>;
