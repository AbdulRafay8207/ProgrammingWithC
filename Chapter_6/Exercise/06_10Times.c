#include <stdio.h>

void tenTimes(int*);

void tenTimes( int* a){
    *a = *a * 30;
}


int main(){
    int x = 45 ,temp;
    int* ptx = &x;
    printf("The value of x is %d\n", x);
    // tenTimes(&x);
    for (int i = 0; i < 1; i++)
    {
        *ptx = *ptx * 30;
    }
    
    // printf("The value of x now is %d\n",temp);
    printf("The value of x now is %d\n",x);
    return 0;
}