#include <stdio.h>

int main(){
    int r;
    printf("Enter radius of circle to calculate area of circle: ");
    
    scanf("%d",&r);
    
    printf("The area of circle with radius %d is %f",r,3.14*r*r);
    return 0;
}