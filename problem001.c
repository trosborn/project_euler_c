#include <stdio.h>

int main() {
    int i = 0;
    int sum = 0; 
    
    while ( i < 1000 ) {
        if ( i % 3 == 0 || i % 5 == 0) {
            sum += i; 
        } 
        i++;
    }
    printf("The sum all ints equal to or less than 100 evenly divisible by 3 and 5 is %d \n", sum);
}
