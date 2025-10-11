#include <stdio.h>

int main()
{
    char c1 = 'W', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
    if (65 <= c1 <= 86)
    {
        c1 = c1 + 4;
    }
    else if (87 <= c1 <= 90)
    {
        c1 = c1 - 22;
    }
    /*

    c1 = c1 + 4;
    c2 = c2 + 4;
    c3 = c3 + 4;
    c4 = c4 + 4;
    c5 = c5 + 4;
    */
    printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);
    putchar(c1);
    putchar(c2);
    putchar(c3);
    putchar(c4);
    putchar(c5);
    putchar('\n');
    return 0;
}