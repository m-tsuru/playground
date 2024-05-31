#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;

    printf("a? ");
    scanf("%d", &a);
    printf("b? ");
    scanf("%d", &b);

    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;

    printf("+: %d\n", c);
    printf("-: %d\n", d);
    printf("*: %d\n", e);
    printf("/: %d\n", f);

    return 0;
}
