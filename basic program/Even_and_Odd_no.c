#include <stdio.h>

int main()
{
    int Num;
    printf("Enter the number: ");
    scanf("%d", &Num);

    // using switch case.
    switch (Num % 2)
    {
    case 0:
        printf("Entered number is even.\n");
        break;
    case 1:
        printf("Entered number is odd.\n");
    default:
        break;
    }

    // using if statment.
    if (Num % 2 == 0)
    {
        printf("Entered number is even.\n");
    }
    if (Num % 2 != 0)
    {
        printf("Entered number is even.\n");
    }

    return 0;
}