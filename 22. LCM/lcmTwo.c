#include<stdio.h>

int HCF(int a, int b){
    if(a==0)
        return b;
    return HCF(b%a, a);
}

/**
 * We know a*b = LCM(a,b) * HCF(a, b)
 */
int LCM(int a, int b){
    return (a/HCF(a, b)) * b;
}

int main(){
    int a = 15;
    int b = 20;
    printf("LCM of %d and %d is: %d", a, b, LCM(a, b));
    return 0;
}