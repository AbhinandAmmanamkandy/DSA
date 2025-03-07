#include<stdio.h>
#include<stdbool.h>
/**
 * Element is shifted to right by 1 bit
 * Same element is shifted to left by 1 bit
 * If both are equal to original element
 * It is even else is odd
 * 
 * ODD NUMBER
 * 1011 >> 1 -> 0101 again shifted to left -> 0101 << 1 -> 1010
 * 
 * EVEN NUMBER
 * 0100 >> 1 -> 0010 again shifted to left -> 0010 << 1 -> 0100
 * 
 * In case of Even number even after shifting to right and left 
 * The element remains same
 */
bool isEven(int n){
    if(n == ((n >> 1) << 1)){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n = 3;
    if(isEven(n)){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}
