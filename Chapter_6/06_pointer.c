#include <stdio.h>

int main(){
    int i = 32;
    int* k = &i;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %d\n",*(&i));
    printf("The address of i is %d\n",*k);
    
    return 0;
}