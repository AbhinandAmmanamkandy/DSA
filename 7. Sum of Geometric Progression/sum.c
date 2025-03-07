#include<stdio.h>

float sum(float a, float r, float n){

    float sum = 0;
    for(int i=0; i<n; i++){
        sum += a;
        a *= r;
    }

    return sum;

}

int main(){

    float a = 1;
    float r = 0.5;
    float n = 10;
    printf("%f is sum", sum(a, r, n));
    
}