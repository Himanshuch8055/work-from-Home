#include <stdio.h>

int main()
{
     int b;
     printf("Enter the number:");
     scanf("%d", &b);

     for (int i = 1; i <= b; i++)
     {
         for (int j = 1; j <= i; j++)
         {
             printf("*");
         }

         printf("\n");
     }

    // Number Triangle

    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}