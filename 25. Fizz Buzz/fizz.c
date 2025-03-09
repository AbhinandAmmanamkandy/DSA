#include<stdio.h>
#include<stdbool.h>
// Given an integer n, for every positive integer i <= n, the task is to print,

//     “FizzBuzz” if i is divisible by 3 and 5,
//     “Fizz” if i is divisible by 3,
//     “Buzz” if i is divisible by 5
//     “i” as a string, if none of the conditions are true.

bool isDivisibleByThree(int n){
    return n%3==0;
}

bool isDivisibleByFive(int n){
    return n%5==0;
}


void fizzBuzz(int n){
    for(int i=1; i<=n; i++){
        // Check if divisible by both 5 and 3
        if(
            isDivisibleByThree(i) &&
            isDivisibleByFive(i)
        ){
            printf("FizzBuzz ");
        }else if(
            isDivisibleByThree(i)
        ){
            printf("Fizz ");
        }else if(isDivisibleByFive(i)){
            printf("Buzz ");
        }else{
            printf("%d ", i);
        }
    }
}

int main(){
    int n = 20;
    fizzBuzz(n);
    return 0;
}