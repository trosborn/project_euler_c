#include <stdio.h>

int main() {
    int fib[2] = {1, 2};
    int rolling_sum = 0;
    
    while( fib[1] <= 4000000 ) {
        if( fib[1] % 2 == 0 ) {
            rolling_sum += fib[1];
        }
        int tmp_sum = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = tmp_sum; 
    }
    printf("The sum of all even terms less than 4 million in the Fibonacci sequence is: %d \n", rolling_sum);
}
