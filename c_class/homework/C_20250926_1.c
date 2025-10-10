#include <stdio.h>
#include <math.h>
int main()
{
    double rate, result;
    int years;
    printf("请输入年增长率7: ");
    scanf("%lf", &rate);
    printf("请输入年数: ");
    scanf("%d", &years);
    result = pow(rate / 100.000 + 1, years);
    result = result * 100;
    printf("增长了：%.2f%c", result, 37);
    return 0;
}