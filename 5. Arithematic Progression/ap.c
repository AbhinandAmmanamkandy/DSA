#include<stdio.h>

int main(){

    int a = 2;
    int d = 1;
    int n = 5;

    // Add d till n
    int nth = a;
    for(int i=1; i<n; i++){
        nth += d;
    }

    printf("The %dth term is: %d", n, nth);
    return 0;

}