#include <stdio.h>

int main () {
    int n, result = 1;
    printf("Enter a didgit to calculate its factorial: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        result = result * i;
    }
    printf("The factorial of %d is %d\n",n,result);
    

    return 0;
}