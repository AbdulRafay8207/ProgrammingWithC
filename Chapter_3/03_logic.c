#include <stdio.h>

int main(){
    int a = 1;
    int b = 0;

    printf("The value of a and b is %d \n",a && b);
    printf("The value of a OR b is %d \n",a || b);

    if(a && b){
        printf("This is && \n");
    }
    if(a || b){
        printf("This is || \n");
    }


    return 0;
}
