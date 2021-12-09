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
    temp = a;
    a = b;
    b = temp;
    printf("number after swapping- \n a = %d , b = %d \n\n", a, b);

    return 0;
}