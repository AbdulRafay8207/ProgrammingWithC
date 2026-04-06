#include <stdio.h>

int main(){
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;
    // Given equation 3*x/y - z+k
    // 3*2/3 - 3+1
    // 6/3 - 4 ====> this is wrong to add 3+1, because there is no bracket or something that indicates to solve the 3+1 first, so we wont do that, instead
    // 2 - 4
    // -2
    // Correct Method: 
    // 3*2/3 - 3+1
    // 2 - 3 + 1 =========> always left to right
    // -1 + 1
    // 0 =======> correct answer
    printf("the evolution is %d",3*x/y - z+k);
    
    return 0;
}