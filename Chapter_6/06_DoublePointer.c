#include <stdio.h>

int main(){
    int i = 32;
    int* k = &i;
    int** j = &k;

    printf("The address of i is %d\n", i);
    printf("The address of i is %d\n", **(&k));
    printf("The address of i is %d\n", ***(&j));
    printf("The address of i is %u\n", &k);
    printf("The address of i is %d\n", *j);


    return 0;
}