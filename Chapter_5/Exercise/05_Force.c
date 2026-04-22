#include <stdio.h>

float force(float);

float force(float x){
    return x * 9.8;
}

int main(){
    float mass;
    printf("Enter force: ");
    scanf("%f",&mass);
    printf("The force of attraction on a body of mass %f is %.2f",mass,force(mass));
    
    return 0;
}