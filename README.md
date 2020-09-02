LINUX CMAKE:
    
first steps:
    mkdir build
    cd build
    cmake ..
    make -j
    
start program:
    ./random

start tests:
    ./random-ut -s
    
LINUX MAKEFILE:

compile program:
    make

compile tests:
    make random-ut

start program:
    ./random

start tests:
    ./random-ut -s

remove program binary file:
    make clean

remove tests binary file:
    make utclean

