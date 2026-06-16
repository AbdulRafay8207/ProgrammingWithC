#include <stdio.h>
#include <math.h>

int main () {
    float h,b,r,a,v;

    printf("Enter values to calculate area of triangle\n");
    printf("Enter height: ");
    scanf("%f", &h);
    printf("Enter base: ");
    scanf("%f", &b);
    printf("Enter radius to calculate volume of sphere: ");
    scanf("%f", &r);

    a = (1.0/2.0)*h*b;

    v = (4.0/3.0)*3.14*pow(r,3);

    printf("The area of triangle is %.2f \n",a);
    printf("The volume of sphere is %.2f \n",v);

    return 0;
}