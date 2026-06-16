#include <stdio.h>

int main() {

    printf("========= ASCII Chart ========= \n\n");

    for (int i = 32; i < 127; i++)
    {
        printf("[%3d : %c]",i,i);

        if((i - 32 + 1) % 8 == 0){
            printf("\n");
        }
    }
    printf("\n\n========= =========== =========\n");

    
    return 0;
}