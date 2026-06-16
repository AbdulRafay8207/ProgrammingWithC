#include <stdio.h>

int main()
{
    float marks[5];
    float total = 0.0, percentage;

    printf("--------- Student Grading System ---------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d out of 100:", i + 1);
        scanf("%f", &marks[i]);

        total = total + marks[i];
    }

    percentage = (total / 500.0) * 100.0;

    printf("------------------------------------\n");
    printf("The total marks you obtained is %.2f out of 500.0\n",total);
    printf("The percenrage you obtained is %.2f%%\n",percentage);

    if(percentage >= 40.0){
        printf("You have passed!\n");
    } else{
        printf("You failed\n");
    }

    return 0;
}