#include<stdio.h>

/**
 * Normal method
 */
int sum(int n){
    int s = 0;
    for(int i=1; i<=n; i++){
        s += i*i;
    }
    return s;
}

int main(){
    int n = 2;
    printf("%d", sum(n));
    return 0;
}