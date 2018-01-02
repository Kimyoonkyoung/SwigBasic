%module swig_basic

// Add necessary symbols to generated header
%{
#include "examplepy.h"
%}

// Process symbols in header
%include "examplepy.h"
