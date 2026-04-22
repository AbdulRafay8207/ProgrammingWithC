#include <stdio.h>

int main(){
    int d, i=1, f=1;
    printf("Enter digit: ");
    scanf("%d", &d);
    
    while (i <= d) {
        f*=i;
        i++;
    }
    printf("Factorial is %d", f);
    return 0;
}