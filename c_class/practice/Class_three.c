#include <stdio.h>

// 你的代码开始
int CalcNum(int A[], int n, int K)
{
    //********** Begin **********
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == K)
        {
            count++;
        }
    }
    return count;
    //********** End **********
}
// 你的代码结束

int main()
{
    int n, K, i, A[10000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    scanf("%d", &K);
    printf("%d\n", CalcNum(A, n, K));
    return 0;
}
