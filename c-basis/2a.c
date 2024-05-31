#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("a? ");
    scanf("%d", &a);
    printf("b? ");
    scanf("%d", &b);

    c = a - b;

    printf("%d", a);
    printf("-");
    printf("%d", b);
    printf("=");
    printf("%d", c);
    printf("\n");
}
