#include <stdio.h>

int main(){
    int rc;
    int r;
    int h;
    printf("Enter radius of circle to calculate area of circle: ");
    scanf("%d",&rc);
    
    printf("Enter height and radius to calculate volume of cylinder:\nEnter Height: ");
    scanf("%d",&h);
    printf("Enter Radius: ");
    scanf("%d",&r);
    
    printf("\nThe area of circle with radius %d is %f\n",rc,3.14*rc*rc);
    printf("The volume of circle with height %d and radius %d is %f\n",h,r,3.14*r*r*h);
    return 0;
}