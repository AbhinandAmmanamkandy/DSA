#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * String varibale in c is a pointer to first character in c
 * So adding a number to that variable gets the added location character
 */

// Function to reverse a string
void reverse(char* begin, char* end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

// Function to reverse the digits of an integer
int reverseDigits(int n) {
    char strin[100];
    
    // Convert the integer to a string
    sprintf(strin, "%d", n);
    
    // Find the length of the string
    int len = strlen(strin);
    
    // Reverse the entire string
    reverse(strin, strin + len - 1);
    
    // Convert the reversed string back to an integer
    n = atoi(strin);
    
    return n;
}

int main() {
    int n = 123456;
    
    // Print the reversed number
    printf("%d\n", reverseDigits(n));
    
    return 0;
}