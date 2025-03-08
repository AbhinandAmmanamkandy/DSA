#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPower(int x, int y){
    float res = log(y) / log(x);
    return res == floor(res);
}

int main(){
    printf("%d", isPower(2, 128));
    return 0;
}