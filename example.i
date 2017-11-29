/* exampple.i */

%module example
%{
    #define SWIG_FILE_WITH_INIT
    #include "example.h"
    #include "example.cpp"
    #include "basic.h"
    #include "basic.cpp"
%}

%include "example.h"
%include "example.cpp"
%include "basic.h"
%include "basic.cpp"