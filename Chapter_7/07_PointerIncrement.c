#include <stdio.h>

int main(){

    // POINTER INCREMENT IN INTERGER
    // int x = 72;
    // int y = 723;
    // int* ptx = &x;
    // printf("The address of x is %u\n",ptx);
    // printf("The address of y is %u\n",&y);
    // ptx++;
    // printf("The address of ptx is %u\n",ptx);

    // POINTER INCREMENT IN CHAR
    char name = 'A';
    char lastName = 'R';
    char* ptx = &name;
    printf("The address of x is %u\n",ptx);
    printf("The address of y is %u\n",&lastName);
    ptx++;
    printf("The address of ptx is %u\n",ptx);

    return 0;
}