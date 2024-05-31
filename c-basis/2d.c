#include <stdio.h>

int main()
{
    int c;
    int d;

    c = getchar();
    printf("Original: %d\n", c);
    d = c - 32;
    printf("Converted: %d [", d);
    putchar(d);
    printf("]\n");

    return 0;
}
