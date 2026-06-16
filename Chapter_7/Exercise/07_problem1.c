#include <stdio.h>

int main(){
    int arr[10] = {12,23,32,34,12,54,34,67,38,65};
    int* ptr = arr;
    printf("The value at address %u is %d", ptr+2, *(ptr+2));
    return 0;
}