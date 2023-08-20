#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;

    int n;
    cout << "Enter the number\n";
    cin >> n;

    cout<<"The factorial of n is "<< factorial(n)<< endl;
    return 0;
}
