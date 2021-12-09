#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d", &a);
    int b;
    printf("Enter the value:");
    scanf("%d", &b);
    int c;
    printf("Enter the value:");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is great number. ", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is great number. ", b);
    }
    else if (c > a && c > b)
    {
        printf("%d is great number. ", c);
    }
    else
        printf("Number are equal. ");

    return 0;
}