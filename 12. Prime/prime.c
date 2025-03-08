#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){
    isPrime(12) ? printf("True") : printf("false");
    return 0;
}