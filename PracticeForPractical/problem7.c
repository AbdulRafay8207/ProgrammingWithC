#include <stdio.h>

int main(){
    int size = 8;

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if((row + col) % 2 == 0){
                printf("##");
            } else{
                printf("  ");
            }
        }
        printf("\n");
        
    }
    

    return 0;
}