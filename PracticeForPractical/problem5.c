#include <stdio.h>

int main()
{
    int numbers[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d out of 3 didgit: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // if((numbers[0] > numbers[1]) && (numbers[0] > numbers[2])){
    //     printf("The highest value is %d\n", numbers[0]);
    // } else if((numbers[1] > numbers[0]) && (numbers[1] > numbers[2])) {  //It will work but not a good approach
    //     printf("The highest value is %d\n", numbers[1]);
    // } else {
    //     printf("The highest value is %d\n", numbers[2]);
    // }

    int max = numbers[0];

    for (int i = 1; i < 3; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("The highest value is %d\n", max);

    return 0;
}