#include <stdio.h>

int main()
{
    double x, y, result;
    printf("Enter value of x: ");
    scanf("%lf", &x);
    printf("Enter value of y: ");
    scanf("%lf", &y);

    for (int i = 1; i <= 4; i++)
    {
        switch (i)
        {
        case 1:
            result = x + y;
            printf("The additon of %.2lf and %.2lf is %.2lf\n", x, y, result);
            break;

        case 2:
            result = x - y;
            printf("The subtraction of %.2lf and %.2lf is %.2lf\n", x, y, result);
            break;

        case 3:
            result = x * y;
            printf("The multiplication of %.2lf and %.2lf is %.2lf\n", x, y, result);
            break;

        case 4:
            if (y != 0.0)
            {
                result = x / y;
                printf("The division of %.2lf and %.2lf is %.2lf\n", x, y, result);
            } else{
                printf("Error: Cannot divided by zero!\n");
            }
            break;

        default:
            printf("Try agian.");
            break;
        }
    }

    return 0;
}