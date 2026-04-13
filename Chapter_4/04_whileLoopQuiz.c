#include <stdio.h>

int main(){
    int i = 0; 
    int a = 10;
    
    // while (i<=10) {
    //     printf("The value of a is %d\n",a);
    //     i++;
    //     a++;
    // }
    
    while (i<=20) {
        if(i>=10){
            printf("The value of i is %d\n",i);
        }
        i++;
    }
    
    return 0;
}