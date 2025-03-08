#include<stdio.h>
/**
 * We need to find HCF of two numbers
 * 
 * Take the smallest number
 * Check from that to 1
 * 
 * If smallest%that==0 and largest%that==0
 * We got HCF
 */

int hcf(int a, int b){
    int hcf = (a<b) ? a : b;
    while(hcf>0){
        if(
            (a%hcf == 0) &&
            (b%hcf == 0)
        ){
            break;
        }
        hcf--;
    }
    return hcf;
}

int main(){
    int a = 98;
    int b = 56;
    printf("HCF of %d and %d is %d", a, b, hcf(a, b));
    return 0;
}