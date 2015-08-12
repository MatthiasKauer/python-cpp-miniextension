/*  Example of wrapping cos function from math.h using SWIG. */

%module cswig_cos
%{
    /* the resulting C file should be built as a python extension */
    #define SWIG_FILE_WITH_INIT
    /*  Includes the header in the wrapper code */
    #include "cos.h"
%}
/*  Parse the header file to generate wrappers */
%include "cos.h"
