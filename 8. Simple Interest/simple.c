#include<stdio.h>

float simpleInterest(float p, float r, float t){
    return ((p*r*t) / 100);
}

int main(){
    float p = 1;
    float r = 1;
    float t = 1;
    printf("%f", simpleInterest(p, r, t));
    return 0;
}