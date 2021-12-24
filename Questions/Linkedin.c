#include <stdio.h>

int a = 10, b = 20;
int f1(a) { return (a * b); }

int main()
{
    // char c1='a', c2='A';
    // int i=c1-c2;
    // printf("%d", i);
    // printf("%c", &c1);
    // printf("%c", &c2);

    printf("%d", f1(5));

    return 0;
}