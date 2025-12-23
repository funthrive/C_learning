#include <stdio.h>
#include <math.h>

int ifpad(int);
int ifpNumber(int);
int main()
{
    int i, pNumber[100] = {0}, count = 0, k = 0;
    for (i = 100; i < 1000; i++)
    {
        if (ifpad(i) && ifpNumber(i))
        {
            printf("%d ", i);
            count++;
            k++;
        }
        if (k == 4)
        {
            putchar('\n');
            k = 0;
        }
    }
    if (k != 0)
        putchar('\n');
    printf("Count=%d", count);
    return 0;
}

int ifpad(int a)
{
    return (a % 10 == a / 100) ? (1) : (0);
}

int ifpNumber(int a)
{
    int k = 1;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            k = 0;
            break;
        }
    }
    return k;
}

#include <stdio.h>

int main()
{
    int a[100] = {0};
    int N, L, R, i, j, k;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &L, &R);
        for (j = L; j <= R; j++)
        {
            a[j - 1] = 1;
        }
    }
    for (i = 0, k = 0; i < 100; i++)
        if (a[i] == 0)
            k++;
    printf("%d", k);
    return 0;
}

#include <stdio.h>

int main()
{
    int s1, s2, c, realc, i, j, k;
    int a[12] = {0};
    char x;
    i = 0;
    while ((x = getchar()) != '\n')
    {
        if (x >= '0' && x <= '9')
        {
            a[i] = x % '0';
            i++;
        }
    }
    i--;
    c = a[i];
    a[i] = 0;
    i--;
    s1 = 0;
    s2 = 0;
    for (j = 0; j <= i; j++, j++)
        s1 = s1 + a[j];
    for (j = 1; j <= i; j += 2)
        s2 = s2 + a[j];
    realc = 10 - ((s2 * 3 + s1) % 10);
    putchar((realc == c) || (realc == 10 && c == 0) ? '1' : '0');
    return 0;
}