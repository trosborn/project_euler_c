#include <stdio.h>

int main() {
    long long number = 600851475143;
    int tmp = 0;
    int div = 2;

    while (number != 0) {
        if (number % div != 0) {
            div = div + 1;
        } 
	else {	
            number = number / div;
	    if (div > tmp) {
	        tmp = div;
	    }	   
	} 
        if (number == 1) {
	    printf("%d \n", tmp);
	    break;
        }
    }
}
