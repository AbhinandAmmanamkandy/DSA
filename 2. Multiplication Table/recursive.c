#include<stdio.h>

void printTable(int n, int i){
    if(i==11)
        return;
    printf("%d x %d = %d\n", n, i, n*i);
    printTable(n, i+1);
}

int main(){
    int n = 100;
    printTable(n, 1);
}