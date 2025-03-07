#include<stdio.h>
#define PI 3.14159265358979323846

float area(float r){
    return (PI * r * r);
}

int main(){
    float r = 5;
    printf("%.5f", area(r));
    return 0;
}