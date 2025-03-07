#include<stdio.h>

/**
 * Dividing by 10 and finding quotient method
 */

int sum(int n){
    int s = 0;
    while(n!=0){
        s += n%10;
        n /= 10;
    }
    return s;
}

int main(){
    int n = 12345;
    printf("%d", sum(n));
    return 0;
}