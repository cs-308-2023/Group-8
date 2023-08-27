#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout << endl;
    cout << "The factorial of 5 is " << factorial(5) << endl;

    int x = 56;
    int y = 98;
    cout << "GCD IMPLEMENTATION:\n";
    cout << "The GCD of " << x << " and " << y << " is " << gcd_non_recursive(x, y) << endl;

    return 0;
}