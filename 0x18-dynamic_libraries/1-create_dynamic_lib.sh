#!/bin/bash

# Compile the C files into object files with appropriate options
gcc -c -Wall -Werror -fpic *.c

# Create the shared library by linking the compiled objects
gcc -shared -o liball.so *.o

# Clean up the object files after creating the library
rm -f *.o
