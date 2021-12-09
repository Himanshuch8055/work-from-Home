#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int b;
    printf("Enter the number: ");
    scanf("%d", &b);
    int temp;
    printf("number before swapping- \n a = %d , b = %d \n\n", a, b);
    a = a + b; // ( 11 + 99 = 110)
    b = a - b; // ( 110 - 99 = 11)
    a = a - b; // ( 110 - 11 = 99)
    printf("number after swapping- \n a = %d , b = %d \n\n", a, b);

    return 0;
}