#include<stdio.h>

/**
 * Preventing integer overflow
 * 
 * n(n+1) should be divisible by 2
 * (2n + 1) should be divisible by 3
 */
int sumOfNNatural(int n){
    return ((n * (n+1) / 2) *
            (2*n + 1) / 3);
}

int main(){
    int n = 10;
    printf("%d", sumOfNNatural(n));
    return 0;
}