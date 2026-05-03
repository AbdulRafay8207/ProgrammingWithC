#include <stdio.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 2, y = 100;
    swap(&x, &y);
    printf("the value of x is %d and the value of y is %d", x,y);

    return 0;
}