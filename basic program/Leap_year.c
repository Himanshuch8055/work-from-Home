#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Your year is leap year");
            }
            else
            {
                printf("Your year is not leap year");
            }
        }
        else
        {
            printf("Your year is leap year");
        }
    }
    else
    {
        printf("Your year is not leap year");
    }
    return 0;
}