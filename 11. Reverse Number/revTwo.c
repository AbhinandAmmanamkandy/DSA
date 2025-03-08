#include<stdio.h>

/**
 * Reverse using recursion
 */

void reverseDigits(int n, int *rev, int *base){
    if(n>0){
        reverseDigits(n/10, rev, base);
        *rev = *rev + (n%10 * *base);
        *base *= 10;
    }
}

int main(){
    int n = 12345;
    int rev = 0;
    int base = 1;
    reverseDigits(n, &rev, &base);
    printf("%d", rev);
}