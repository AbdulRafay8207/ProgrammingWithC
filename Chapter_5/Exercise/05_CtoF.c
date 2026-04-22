#include <stdio.h>


float CtoF(float);

float CtoF(float x){
    return (x*1.8) +32;
}

int main(){
    float cel;
    printf("Enter Celcius: ");
    scanf("%f",&cel);
    printf("Farhenheit is %.2f",CtoF(cel));
    return 0;
}