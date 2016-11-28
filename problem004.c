#include <stdio.h>

long r;

long reverse(long n) {
    if (n == 0) { return 0; }
    r = r * 10;
    r = r + n % 10;
    reverse(n/10); 
    return r;
} 

int main() {
    int i = 1000;
    int n = 1000;
    long palindrome;
    long val;
    long tmp;

    while(i > 100) {
        i -= 1;
	n = 1000;
	while(n > 100) {
             n -= 1;
	     val = i * n; 
	     r = 0;
	     tmp = reverse(val);
	     if(val == tmp) {
		 if(val > palindrome) {
	             palindrome = val;
		 }
	     }
	}	
    }
    printf("%ld", palindrome);
}
