#include "integer.hpp"

namespace integers{

    int add(int a, int b){
        return a+b;
    }

    int multiply(int a, int b){
        return a*b;
    }

    int divide_round_down(int a, int b){
        return ((a < 0) != (b < 0))? (a/b - 1) : (a/b);
    }

    int divide_round_up(int a, int b){
        return ((a < 0) != (b < 0))? (a/b) : (a/b + 1);
    }

    double divide(int a, int b){
        return ((double)a)/((double)b);
    }
}

