#include<stdio.h>

/**
 * Dividing by 10 using recursive method
 */
int sumOfNumber(int n){
    if(n == 0)
        return 0;
    
    return (n%10) + sumOfNumber(n/10);
}

int main(){
    printf("%d", sumOfNumber(12345));
    return 0;
}