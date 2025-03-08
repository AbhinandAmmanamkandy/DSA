#include<stdio.h>
#include<stdbool.h>

/**
 * Third side must always be greater than sum of other two sides
 */

bool checkValidity(int a, int b, int c){
    if(
        (a + b <= c) ||
        (a + c <= b) ||
        (b + c <= a)
    ){
        return false;
    }
    return true;
}

int main(){
    int a = 7;
    int b = 1;
    int c = 5;
    checkValidity(a, b, c) ? printf("Valid") : printf("Not valid");
    return 0;
}