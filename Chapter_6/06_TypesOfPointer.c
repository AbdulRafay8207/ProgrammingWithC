#include <stdio.h>

int main(){
    char i = 'A';
    char* k = &i;
    printf("The address of i is %p\n",&i);
    printf("The value of i is %c\n",*(&i));
    printf("The value of pointer k is %c\n",*k);
    
    return 0;
}