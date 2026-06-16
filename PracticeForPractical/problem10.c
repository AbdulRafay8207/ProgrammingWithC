#include <stdio.h>

int main() {
    int n;
    printf("Enter digit: ");
    scanf("%d",&n);

    if(n <= 1) {
        printf("%d is not a prime number\n", n);
    } else{
        for (int i = 2; i < n; i++)
        {
            if(n % i == 0){
                printf("%d is not a prime number\n",n);
                break;
            } else {
                printf("%d is prime number\n",n);
                break;
            }
        }
        
    }


    return 0;
}