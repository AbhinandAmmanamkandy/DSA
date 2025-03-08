#include<stdio.h>
#include<math.h>
/**
 * Method used in pocket calculators
 * 
 * Let’s say square root of n is x:
 * x = √n
 * Squaring both the sides:
 * x^2 = n
 * Taking log on both the sides:
 * =>  ln(x^2) = ln(n) 
 * => 2*ln(x) = ln(n)
 * => ln(x) = 1/2 * ln(n)
 * To isolate x, exponentiate both sides with base e:
 * => x =  e^(1/2 * ln(n))
 * x is the square root of n:
 * √n = e^(1/2 * ln(n))
 */

int squrt(int n){
    int res = exp(0.5 * log(n));
    if((res+1) * (res+1) <=n){
        res++;
    }
    return res;
}

int main(){
    int n = 11;
    printf("%d", squrt(n));
    return 0;
}