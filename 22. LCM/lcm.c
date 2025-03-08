#include<stdio.h>
/**
 * Logic
 * 
 * Take the bigger number. If it is divisible by smallest, it is the LCM
 * If not, increase the bigger number with bigger number
 */
int LCM(int a, int b){
    int greater = a>b ? a : b;
    int smaller = a<b ? a : b;
    for(int i=greater; ;i+=greater){
        if(i%smaller == 0)
            return i;
    }
}

int main(){
    int a = 10;
    int b = 5;
    printf("LCM of %d and %d is %d", a, b, LCM(a, b));
    return 0;
}