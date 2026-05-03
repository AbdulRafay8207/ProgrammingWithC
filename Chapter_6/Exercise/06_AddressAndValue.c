#include <stdio.h>

int main(){
    int i = 123;
    printf("The address of i is %u\n",&i);
    printf("The value of i is %d or this %d\n",i,*(&i) );
    return 0;
}