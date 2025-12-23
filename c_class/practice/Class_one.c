#include <stdio.h> // 这是编译预处理指令

int main()                            // 定义主函数
{                                     // 函数开始的标志
    printf("This is a C program.\n"); // 输出所制定的一行信息

    int a, b, sum;
    a = 123;
    b = 456;
    sum = a + b;
    printf("sum is %d.\n", sum);

    int max(int x, int y);
    int c;
    scanf("%d,%d", &a, &b);
    c = max(a, b);
    printf("max=%d\n", c);
    return 0; // 函数执行完毕时返回数值0
} // 函数结束的标志

int max(int x, int y)
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return (z);
}