// test_calculator.c
#include <assert.h>
#include "MathOperation.h"

void test_add() 
{
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    assert(add(-1, -1) == -2);
}

void test_subtract()
{
    assert(subtract(5, 3) == 2);
    assert(subtract(3, 5) == -2);
    assert(subtract(0, 0) == 0);
}

void test_multiply() 
{
    assert(multiply(2, 3) == 6);
    assert(multiply(-1, 1) == -1);
    assert(multiply(-2, -3) == 6);
}

void test_divide() 
{
    assert(divide(6, 3) == 2);
    assert(divide(5, 2) == 2);
    assert(divide(1, -1) == -1);
}

int main() 
{
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
    printf("All tests passed successfully.\n");
    return 0;
}