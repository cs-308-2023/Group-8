#include "functions.h"

int factorial(int n){

    while (n < 0){
        int x;
        cin >> x;
        n = x;
    }

    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
