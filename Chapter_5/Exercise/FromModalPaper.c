#include <stdio.h>

int main(){
    // for (int i=1; i <= 5; i++) {
    //     for(int j = 1 ; j <= i; j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

    for (int i=1; i <= 5; i++) {
        printf("%d",i);
        for(int j = 0 ; j < 1; j++){
            printf(" %d",i*i);
        }
        printf("\n");
    }
    
    return 0;
}