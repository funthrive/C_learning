#include <stdio.h>
#include <math.h>

int getn(int x, int i)
{
    x = x / (int)pow(10, i);
    x = x % 10;
    return x;
}

int main()
{
    int in, num = 0, i, temp;
    scanf("%d", &in);
    i = in;
    if (in == 0)
    {
        num = 1;
    }
    while (i > 0)
    {
        i = i / 10;
        num++;
    }

    printf("%d\n", num);
    for (i = num - 1; i >= 0; i--)
    {
        temp = getn(in, i);
        printf("%d ", temp);
    }
    putchar('\n');
    for (i = 0; i < num; i++)
    {
        temp = getn(in, i);
        printf("%d", temp);
    }

    return 0;
}
