#include<stdio.h>
#include<stdbool.h>
/**
 * A number is perfect if its sum of divisors are equal to the number
 * eg: 6 has divisors 1, 2, 3 
 * 1 + 2 + 3 = 6 
 * Thus 6 is a perfect number
 */
bool isPerfect(int n){
    int sum = 0;
    for(int i=1; i<n; i++){
        if(n%i == 0){
            sum += i;
        }
    }
    return sum == n;
}

int main(){
    int n = 28;
    isPerfect(n) ? printf("Perfect") : printf("Not Perfect");
    return 0;
}