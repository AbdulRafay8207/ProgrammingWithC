#include <stdio.h>

int main() {
    char name[30];
    printf("Enter your name: ");
    scanf("%[^\n]",name);

    for (int i = 1; i <= 10; i++)
    {
        printf("Your name is %s \n",name);
    }

    return 0;
}