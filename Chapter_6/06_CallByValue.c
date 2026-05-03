#include <stdio.h>

int sum(int,int);

int sum (int a, int b){
    return a + b;
}

int main(){
    int a = 4, b = 6;
    printf("The sum of a, b is %d\n",sum(a,b));
    return 0;
}