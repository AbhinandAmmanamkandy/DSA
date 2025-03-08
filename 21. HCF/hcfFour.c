#include<stdio.h>

int hcf(int a, int b){
    if(b==0)
        return a;
    return hcf(b, a%b);
}

int main(){
    int a = 98;
    int b = 56;
    printf("HCF of %d and %d is %d", a, b, hcf(a, b));
    return 0;
}