#include<stdio.h>

int arithematic(int a, int d, int n){
    return ( a + (n - 1) * d);
}

int main(){
    int a = 2;
    int d = 1; 
    int n = 5;

    int nth = arithematic(a, d, n);
    printf("%dth term: %d", n, nth);

    return 0;
}