#include <stdio.h>

typedef struct Roma
{
    char letter[13][2];
    int num;
} Roma;

int main()
{
    char letter[13][3] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int b[13] = {0}, num[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 3999)
    {
        printf("error");
        return 0;
    }
    for (int i = 0; i < 13; i++)
    {
        b[i] = n / num[i];
        n = n % num[i];
    }
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < b[i]; j++)
            printf("%s", letter[i]);
    }
}