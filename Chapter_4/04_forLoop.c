#include <stdio.h>

int main(){
    int n;
    printf("Enter a digit: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("Value of i is %d\n",i);
    }
    
    return 0;
}