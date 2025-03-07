#include<stdio.h>
int main(){
    
    int a = 2;
    int b = 3;

    printf("Before Swapping\n");
    printf("a: %d, b: %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After Swapping\n");
    printf("a: %d, b: %d\n", a, b);

    return 0;
}