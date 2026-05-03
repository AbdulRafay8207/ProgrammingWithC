#include <stdio.h>

int sum(int*,int*);

int sum(int* a, int* b){
    *a = 100;
    return *a + *b;
}


int main(){
int x = 2, y = 4;
printf("The sum of %d and %d is %d\n", x,y,sum(&x, &y));
    return 0;
}