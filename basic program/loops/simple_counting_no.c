#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value: ");
    scanf("%d", &a);

    for (int i = 0; i <= a; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}