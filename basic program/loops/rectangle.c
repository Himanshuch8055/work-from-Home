#include <stdio.h>

int main()
{
    int i, j, k, l;
    printf("Enter the row: ");
    scanf("%d", &k);
    printf("Enter the column:");
    scanf("%d", &l);

    for (j = 0; j <= k; j++)
    {
        for (i = 1; i <= l; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}