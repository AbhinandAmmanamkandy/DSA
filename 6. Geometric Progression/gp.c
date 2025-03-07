#include<stdio.h>

int geometric(int a, int r, int n){
    int nth = a;
    for(int i=1; i<n; i++){
        nth *= r;
    }
    return nth;
}

int main(){
    int a = 2;
    int r = 3;
    int n = 5;

    printf("%dth term is: %d", n, geometric(a, r, n));

    return 0;
}