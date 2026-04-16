#include <stdio.h>

int main(){
    int d,f=1;
    printf("Enter a digit to calculate factorial: ");
    scanf("%d",&d);
    for (int i = 1; i <= d; i++)
    {
        f *= i;
    }
    printf("Factorial is %d",f);
    return 0;
}