#include <stdio.h>

void isAddressSame(int* a){
    printf("The address of i in funtion is %u\n",&*a);
    return;
}

int main(){
    int i;
    printf("The address of i is %u\n", &i);
    isAddressSame(&i);
    return 0;
}