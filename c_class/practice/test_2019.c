#include <stdio.h>

int main()
{
    char Ops[10][10] = {\0};
    char a =\0;
    int i = 0, j = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            Ops[i][j] = getchar();
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (Ops[i][j] == '+' || Ops[i][j] == '-' || Ops[i][j] == '*' || Ops[i][j] == '/' || Ops[i][j] == '(' || Ops[i][j] == ')')
                Ops[i][j] = '\n';
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a == '\n' && Ops[i][j] == '\n')
                Ops[i][j] =\0;
            a = Ops[i][j];
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (Ops[i][j] !=\0)
                printf("%c", Ops[i][j]);
        }
    }
    return 0;
}