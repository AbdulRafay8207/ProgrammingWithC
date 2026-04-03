#include <stdio.h>

int main(){
    int age;
    char name[15];
    printf("Enter your name: ");
    scanf("%s",name);
        
    printf("Enter your age: ");
    scanf("%d",&age);
    
    printf("My name is %s and I am %d year` old",name,age);
    return 0;
}