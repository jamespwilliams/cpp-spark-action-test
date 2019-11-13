#include <math.h>
#include <cmath>
#include "double.hpp"

namespace doubles {

    double add(double a, double b){
        return a + b;
    }

    double multiply(double a, double b){
        return a*b;
    }

    int divide_round_down(double a, double b){
        return static_cast<int>(floor(a / b));
    }

    int divide_round_up(double a, double b){
        return static_cast<int>(ceil(a / b));
    }

    int divide_round_nearest(double a, double b){
        return static_cast<int>(std::round(a / b));
    }

    double divide(double a, double b){
        return a/b;
    }
}
