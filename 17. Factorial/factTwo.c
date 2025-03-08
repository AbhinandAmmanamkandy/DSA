#include<stdio.h>

int fact(int n){
    int p = 1;
    for(int i=n; i>0; i--){
        p *= i;
    }
    return p;
}

int main(){
    printf("%d", fact(5));
    return 0;
}