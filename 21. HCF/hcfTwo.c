#include<stdio.h>

/**
 * Euclidean Algorithm 
 * 
 * Substract small from big at the end one of them will become zero
 */
int hcf(int a, int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a;

    if(a>b)
        return hcf(a-b, b);
    return hcf(a, b-a);
}

int main(){
    int a = 98;
    int b = 56;
    printf("HCF of %d and %d is %d", a, b, hcf(a, b));
    return 0;
}