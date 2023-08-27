#include "functions.h"

int gcd_recursive(int x, int y){
    if (x == 0) return y; // Recursion base case
    else return gcd_recursive(x, y % x); // Recursive becuase the function calls itself
}

int gcd_non_recursive(int x, int y){
    while (x && y){ // Previous iterative implementation
        if (x > y) x = x % y;
        else y = y % x;
    }

    if (x == 0) {
        return y;
    }

    return x;
}

