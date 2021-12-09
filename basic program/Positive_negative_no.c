#include <stdio.h>

int main()
{
    int Num;
    printf("Enter the number with symbol & sign: ");
    scanf("%d", &Num);

    // using switch case.
    switch (Num > 0)
    {
    case 1:
        printf("Your number is Positive.\n");
        break;
    case 0:
        switch (Num < 0)
        {
        case 1:

            printf("your number is Negative.\n");
            break;

        default:
            printf("Your number is Zero.\n");
            break;
        }
    }

    // using if statment.
    if (Num > 0)
    {
        printf("Your number is Positive.\n");
    }
    else if (Num < 0)
    {
        printf("your number is Negative.\n");
    }
    else
        printf("Your number is Zero.\n");

    return 0;
}