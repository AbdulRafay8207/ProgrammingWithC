#include <stdio.h>

int main(){
    int age = 19;
    
    if(age < 5){
        printf("Your age is less than 5\n");
    } else {
        printf("Your age is greater than 5\n");
    }
    if(age > 10){
        printf("Your age is greater than 10\n");
    } else{
        printf("Your age is less than 10\n");
    }
    if(age % 5 == 0){
        printf("Your age is divisible by 5\n");
    } else{
        printf("Your age is not divisible by 5\n");
    }
    return 0;
}