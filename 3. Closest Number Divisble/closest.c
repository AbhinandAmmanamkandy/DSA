#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int closestNumber(int num, int div){

    int closest = 0;
    int minDiff = INT_MAX;

    // Closest can be between num-div and num+div
    // If any of those modulus is zero
    // Add it to closest
    // Also periodically check minDiff is less than current diff

    for(int i=num-abs(div); i<=num+abs(div); ++i){
        if(i%div == 0){
            int diff = abs(num-i);
            if(
                (diff < minDiff) ||
                (diff == minDiff && abs(i) > abs(closest))
            ){
                closest = i;
                minDiff = diff;
            }
        }
    }

    return closest;

}

int main() {
    int num = 13, div = 4;
    printf("%d\n", closestNumber(num, div));
    return 0;
}