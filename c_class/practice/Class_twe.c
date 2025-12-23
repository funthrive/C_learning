#include <stdio.h>

int main()
{
    char input;
    int base;
    input = getchar();
    if (('a' <= input && input <= 'z') || ('A' <= input && input <= 'Z'))
    {
        if ('a' <= input && input <= 'z')
        {
            base = 97;
        }
        else
        {
            base = 65;
        }
        int output = (input - base + 4) % 26;
        putchar(output + base);
    }
    else
    {
        printf("这家伙在说什么呢！");
    }
    return 0;
}