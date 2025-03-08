#include<stdio.h>
#include<math.h>

float distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main(){
    printf("%f", distance(3, 4, 4, 3));
    return 0;
}