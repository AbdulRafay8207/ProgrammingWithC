#include <stdio.h>

int main(){
    float c,f;
    printf("Enter Celcius in float eg(37.0): ");
    scanf("%f",&c);
    
    printf("The converstion of celcius into fahrenheit is: %f", (c*(9.0/5))+32);
    return 0;
}