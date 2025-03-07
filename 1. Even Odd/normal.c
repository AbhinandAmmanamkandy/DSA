#include<stdio.h>

int isEven(int n){
    return n%2==0;
}

int main(){
    int n = 102;
    if(isEven(n)){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}