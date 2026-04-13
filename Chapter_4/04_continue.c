#include <stdio.h>

int main(){
    int n;
    printf("Enter a digit: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if(i == 5){
            continue;
        }
        printf("Value of i is %d\n",i);
    }
    
    return 0;
}