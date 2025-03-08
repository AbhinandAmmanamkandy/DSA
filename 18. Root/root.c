#include<stdio.h>

/**
 * Check squares from 1 till num
 */

int squrt(int n){
    int t = 1;
    while(t*t <= n){
        t++;
    }
    return t-1;
}

int main(){
    int n = 11;
    printf("%d", squrt(n));
    return 0;
}