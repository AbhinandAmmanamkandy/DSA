#include<stdio.h>
#include<stdbool.h>

/**
 * Overlap means touching
 * 
 * If two rectangles are completely to the left,
 * It doesn't overlap
 * 
 * If two rectangles are completely above
 * It doesn't overlap
 */
struct Point{
    int x;
    int y;
};

bool checkOverlap(struct Point l1, struct Point r1, struct Point l2, struct Point r2){
    if(
        l1.x > r2.x ||
        l2.x > r1.x
    ){
        return false;
    }

    if(
        r1.y > l2.y ||
        r2.y > l1.y
    ){
        return false;
    }
    return true;
}

int main(){
    struct Point l1 = {0, 10};
    struct Point r1 = {10, 0};
    struct Point l2 = {5, 5};
    struct Point r2 = {15, 0};
    checkOverlap(l1, r1, l2, r2) ? printf("Overlap") : printf("Not Overlap");
}