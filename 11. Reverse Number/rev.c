#include<stdio.h>

/**
 * Normal method, by getting reminder by dividing with 10
 */

int reverseDigits(int n){
    int rev = 0;
    while(n>0){
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }
    return rev;
}

int main(){
    int n = 12345;
    printf("%d", reverseDigits(n));
    return 0;
}