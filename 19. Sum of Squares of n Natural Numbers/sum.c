#include<stdio.h>
#include<math.h>

/**
 * Using reccursion
 */

int sum(int n){
    if(n==1){
        return 1;
    }
    return pow(n, 2) + sum(n-1);
}

int main(){
    int n = 8;
    printf("%d", sum(n));
    return 0;
}