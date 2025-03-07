#include<stdio.h>
#include<stdlib.h>

int closestNumber(int num, int div){

    // Find quotient
    int quotient = num / div;

    // 1st possible closest number
    int n1 = div * quotient;

    // 2nd possible closest number
    int n2 = div * (quotient + 1);

    // Find diff. Only take minimum
    if(abs(num - n1) < abs(num - n2))
        return n1;
    
    return n2;

}

int main(){
    int num = 13;
    int div = 4;
    printf("%d\n", closestNumber(num, div));
    return 0;
}