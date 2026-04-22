#include <stdio.h>

int sumOfFirstNnaturalNumbers(int);

int sumOfFirstNnaturalNumbers(int n){
    if(n == 0 || n == 1 ){
        return 1;
    }
    return sumOfFirstNnaturalNumbers(n-1) + n;
}

int main(){
    int a;
    printf("Enter digit: ");
    scanf("%d", &a);
    printf("The sum of first %d natural number is %d",a,sumOfFirstNnaturalNumbers(a));
    
    return 0;
}