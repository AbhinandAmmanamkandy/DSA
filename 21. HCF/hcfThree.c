#include<stdio.h>

int hcf(int a, int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a;
    if(a>b){
        if(a%b==0)
            return b;
        return hcf(a-b, b);
    }
    if(b%a == 0)
        return a;
    return hcf(a, b-a);
}

int main(){
    int a = 98;
    int b = 56;
    printf("HCF of %d and %d is %d", a, b, hcf(a, b));
    return 0;
}