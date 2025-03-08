#include<stdio.h>

/**
 * Using formula n(n+1)(2n+1)/6
 */
int sumOfNNatural(int n){
    return (n * (n+1) *
            (2*n + 1)) / 6;
}

int main(){
    int n = 10;
    printf("%d", sumOfNNatural(n));
    return 0;
}