#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * Using hash map or dictionary
 */

char * fizzBuzz(int n){
    char* res = (char*)malloc(n*10*sizeof(char));
    char buffer[10];

    const char* fizz = "Fizz";
    const char* buzz = "Buzz";

    for(int i=1; i<=n; i++){
        char s[10] = "";
        if(i%3==0)
            strcat(s, fizz);
        if(i%5==0)
            strcat(s, buzz);

        if(strlen(s) == 0){
            sprintf(buffer, "%d", i);
            strcat(s, buffer);
        }
        strcat(res, s);
        strcat(res, " ");
    }
    return res;
}

int main() {
    int n = 20;
    char* res = fizzBuzz(n);
    printf("%s\n", res);
    free(res);
    return 0;
}