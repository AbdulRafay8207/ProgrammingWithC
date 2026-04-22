#include <stdio.h>

// Function Prototype

int sum(int, int);

void display();

// Function Definition

int sum(int x , int y){
    return x + y; 
}

void display(){
    printf("Hi im void\n");
}

int main(){
    int addition = sum(23,43);
    display();
    printf("The value of addition is %d \n", addition);
    
    return 0;
}