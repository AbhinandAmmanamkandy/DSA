#include<stdio.h>
#include<string.h>
/**
 * Take input as string
 * 
 * If integer is taken as string
 * 0 has ASCII value of 48
 * 1 has ASCII value of 49
 * 
 * So we substract two character to produce integer
 * ie '1' - '0' is 49 - 48 which is 1 in integer
 */
int sumOfDigits(char *s){
    int sum = 0;
    for(int i=0; i<strlen(s); i++){
        int digit = s[i] - '0';
        sum += digit;
    }
    return sum;
}

int main(){
    char s[] = "12345";
    printf("%d", sumOfDigits(s));
    return 0;
}