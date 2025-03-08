#include<stdio.h>
#include<math.h>
/**
 * Using builtin sqrt function
 */
int squrt(int n){
    return sqrt(n);
}

int main(){
    int n = 11;
    printf("%d", squrt(n));
    return 0;
}