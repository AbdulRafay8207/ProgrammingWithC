#include <stdio.h>

int main(){
    int marks[] = {12,23,34,14};
    int* ptr = marks;
    for (int i = 0; i < 4; i++)
    {
        // printf("The value of marks at index %d is %d\n",i,marks[i]);
        printf("The value of marks at index %d is %d\n",i, *ptr);
        ptr++;
    }
    
    return 0;
}