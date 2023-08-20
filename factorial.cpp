#include "functions.h"
#include <iostream>
using namespace std;

int factorial(int n){

    while (n < 0){
        int x;
        cout << "Enter valid positive number\n"; 
        cin >> x;
        n = x;
    }

    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
