#include <stdio.h>

int main(){
    int length;
    int breath;
    printf("Calculate area of rectangle\n");

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter Breath: ");
    scanf("%d", &breath);

    printf("The area of rectangle is %d", length*breath);
    return 0;
}
