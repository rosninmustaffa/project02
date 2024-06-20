// MathOperation.c
#include "MathOperation.h"

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b == 0) {
        return 0; // Error value
    }
    return a / b;
}
