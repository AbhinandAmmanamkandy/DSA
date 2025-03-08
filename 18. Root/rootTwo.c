#include<stdio.h>
/**
 * Binary Search
 * 
 * Take the middle element
 * If mid*mid <= n then element is between low and mid
 * Else element is between mid and high
 */
int squrt(int n){

    int low = 1;
    int high = n;
    int res = 1;

    while(low <= high){

        int mid = low + (high - low) /2; // Prevents integer overflow
        if(mid*mid <= n){
            res = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }

    }

    return res;

}

int main(){
    int n = 11;
    printf("%d", squrt(n));
    return 0;
}