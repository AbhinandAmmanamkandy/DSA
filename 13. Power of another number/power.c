#include <stdio.h>
#include<stdbool.h>

bool checkPower(int p, long int num){
    if(p==1)
        return num == 1;

    while(num > 1){
        if(num % p != 0){
            return false;
        }
        num /= p;
    }

    return num == 1;

}

int main(){
    printf("%d", checkPower(10, 1));
}