#include<stdio.h>

int HCF(int a, int b){
    if(a==0)
        return b;
    return HCF(b%a, a);
}

/**
 * Dividing fraction with common factor
 */
void lowest(int *num3, int *den3){
    int commonFactor = HCF(*num3, *den3);
    *den3 = *den3 / commonFactor;
    *num3 = *num3 / commonFactor;
}

/**
 * How do we add fraction?
 * 
 * LCM(den1, den2) is denominator
 * num3 = n1*d3/d1 + n2*d3/d2
 */
void addFraction(int num1, int den1, int num2, int den2, int *num3, int *den3){
    *den3 = HCF(den1, den2);
    // Finding LCM
    /**
     * LCM * HCF = a * b
     * LCM = a * b / HCF
     */
    *den3 = (den1 * den2) / *den3;
    *num3 = num1 * (*den3 / den1) + num2 * (*den3 / den2);
    lowest(num3, den3);
}

int main(){
    int num1 = 1;
    int den1 = 500;
    int num2 = 2;
    int den2 = 1500;
    int num3;
    int den3;
    addFraction(num1, den1, num2, den2, &num3, &den3);
    printf("%d/%d + %d/%d is equal to %d/%d\n", num1, den1, num2, den2, num3, den3);
    return 0;
}