#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    for (int j = 1; j <= a; j++)
    {
        for (int i = a; i >= j; i--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}