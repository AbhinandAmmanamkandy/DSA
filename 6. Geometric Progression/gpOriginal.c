#include<stdio.h>
#include<math.h>

int geometric(int a, int r, int n){
    return (a*(pow(r, n-1)));
}

int main(){
    // Starting number
    int a = 2;
    // Common ratio
    int r = 3;
    // nth term
    int n = 5;
    printf("%dth term: %d", n, geometric(a, r, n));
    return 0;
}
