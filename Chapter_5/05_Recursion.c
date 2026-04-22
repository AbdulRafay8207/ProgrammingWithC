#include <stdio.h>


int factorial(int);

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return factorial(n-1)* n; // technically all n numbers are stacking beside n
}

int main(){
    int num;
    printf("Enter digit to calculate its factorial: ");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));
    return 0;
}