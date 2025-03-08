#include<stdio.h>
#include<math.h>

/**
 * Logic
 * 
 * Input = 9
 * Output = 2
 * ie 1^3+2^3=9 and 2^3+1^3=9
 * 
 * So n = 9
 * We got perfect cube 1
 * Substract that from n ie 9-1=8 which is also a perfect cube
 * If found increase count
 */

int countPairs(int n){
    int count = 0;
    for(int i=1; i<=cbrt(n); i++){
        int cb = i*i*i;
        int diff = cb - n;
        int cbrtDiff = cbrt(diff);
        if(cbrtDiff*cbrtDiff*cbrtDiff == diff)
            count++;
    }
    return count;
}

int main(){
    int n = 9;
    printf("%d", countPairs(n));
    return 0;
}