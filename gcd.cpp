#include "functions.h"

int gcd(int x, int y){
    while (x && y){
        if (x > y) x = x % y;
        else y = y % x;
    }

    if (x == 0) return y;
    else return x;
}