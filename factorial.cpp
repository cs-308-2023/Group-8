#include "functions.h"
#include <iostream>
using namespace std;

int factorial(int n){

    // Negative number check
    while (n < 0){
        int x;
        cout << "Enter valid positive number\n"; 
        cin >> x; // Taking new input
        n = x;
    }

    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
