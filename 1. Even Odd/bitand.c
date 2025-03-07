#include<stdio.h>
#include<stdbool.h>

/**
 * 5 - 101
 *    &001
 *     ---
 *     001
 */
bool isEven(int n){
    if((n&1) == 0)
        return true;
    else
        return false;
}

int main(){
    int n = 6;
    if(isEven(n)){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}