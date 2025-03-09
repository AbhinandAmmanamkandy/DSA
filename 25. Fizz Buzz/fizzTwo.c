#include<stdio.h>
#include<string.h>
/**
 * String concatenation method
 */
void fizzBuzz(int n){
    for(int i=1; i<=n; i++){
        char s[10] = "";
        if(i%3==0)
            strcat(s, "Fizz ");
        if(i%5==0)
            strcat(s, "Buzz ");
        if(strlen(s) == 0)
            sprintf(s, "%d ", i);

        printf("%s", s);
    }
}

int main(){
    fizzBuzz(10);
    return 0;
}