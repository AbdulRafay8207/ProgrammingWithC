#include <stdio.h>

int main() {
    int n;
    printf("Enter how long you want: ");
    scanf("%d", &n);
    int first = 0, second = 1, next;

    printf("Fibonacci series upto %d terms \n",n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", first);

        next = first + second;

        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}