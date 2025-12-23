#include <stdio.h>

void exc(int *a, int *b)
{
    int c = *b;
    *b = *a;
    *a = c;
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    int a[100] = {0};
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                exc(&a[i], &a[j]);
    int i = 0;
    while (a[i] == 0)
        i++;
    exc(&a[0], &a[i]);
    for (int j = 0; j < n; j++)
        printf("%d", a[j]);
    return 0;
}