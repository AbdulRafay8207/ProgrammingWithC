#include <stdio.h>

int main(){
    // Using While loop----------------
    // int i = 1;
    // int sum = 0;
    // while (i<=10)
    // {
    //     sum += i;
    //     i++;
    // }
    
    // printf("The sum of first 10 natural number is %d\n", sum);
    // return 0;

    // Using Do-While loop----------------
    // int i = 1;
    // int sum = 0;
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i<=10);
    // printf("The sum of first 10 natural number is %d\n", sum);

    // Using For loop----------------
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first 10 natural number is %d\n", sum);
    
    
}