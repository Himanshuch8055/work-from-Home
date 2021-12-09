#include <stdio.h>

int main()
{
    char opretion;
    printf("Enter the do you want: ");
    scanf("%c", &opretion);
    int a;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    int b;
    printf("Enter the second Number: ");
    scanf("%d", &b);

    switch (opretion)
    {
    case '+':
        printf("Sum is:%d\n", a + b);
        break;
    case '-':
        printf("Sub is:%d\n", a - b);
        break;
    case '*':
        printf("Mul is:%d\n", a * b);
        break;
    case '/':
        printf("Div is:%d\n", a / b);
        break;
    case '%':
        printf("Mod is:%d\n", a % b);
        break;
    default:
        printf("No Opretion Match:");
        break;
    }

    return 0;
}