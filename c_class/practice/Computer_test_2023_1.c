#include <stdio.h>
#include <string.h>

int main()
{
    char a[20][2] = {'\0'};
    char b0, b1;
    int i = 0, j, k;
    while (((b0 = getchar()) != '\n') && ((b1 = getchar()) != '\n'))
    {
        a[i][0] = b0;
        a[i][1] = b1;
        i++;
    }
    while (i >= 0)
    {
        putchar(a[i][0]);
        putchar(a[i][1]);
        i--;
    }
    return 0;
}