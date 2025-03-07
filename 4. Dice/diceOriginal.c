#include<stdio.h>

void oppositeDiceFace(int n){
    int oppositeFace = 7 - n;
    printf("%d", oppositeFace);
}

int main(){
    int n = 1;
    oppositeDiceFace(n);
    return 0;
}