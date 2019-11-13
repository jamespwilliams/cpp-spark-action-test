#include "integer.hpp"

namespace integers {
    int add(int a, int b) {
        return a+b;
    }

    int multiply(int a, int b) {
        return a*b;
    }

    int factorial(int a ) {
        if (a == 0)
            return 1;

        return a * factorial(a-1);
    }
} // namespace integers
