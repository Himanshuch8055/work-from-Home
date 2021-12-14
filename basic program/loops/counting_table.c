#include <stdio.h>

int main()
{
    int a, b;
    for (int a = 1; a <= 10; a++)
    {
        for (int b = a; b <= 100; b += 10)
        {
            printf("%4d", b);
        }

        printf("\n");
    }

    return 0;
}