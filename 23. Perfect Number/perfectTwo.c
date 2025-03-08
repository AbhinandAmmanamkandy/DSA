#include<stdio.h>
#include<stdbool.h>
/**
 * Logic
 * 
 * Start from 2 to sqrt(n)
 * if n%i==0
 * sum = sum + i;
 * 
 * Since we only checks number from 2 to sqrt(n) we misses 
 * some numbers after it
 * 
 * We know every divisor i comes with corresponding paired divisor n/i
 * So we add that to the sum. Until and unless i is a perfect square
 * ie 6*6=36 we don't need to add 6 again
 */
bool isPerfect(long long int n){
    // We start from 2, so we initialize sum as 1
    long long int sum = 1;

    // Find all divisors and add them
    for(long long int i = 2; i*i<=n; i++){
        if(n%i==0){
            // For perfect square we dont need to add same number
            if(i * i != n)
                sum = sum + i + n/i;
            else
                sum = sum + i;
        }
    }
    if(sum == n && n!=1)
        return true;
    return false;
}

int main(){
    isPerfect(6) ? printf("Perfect") : printf("Not Perfect");
    return 0;
}
