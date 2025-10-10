#include <stdio.h>
#include <math.h>
int main()
{
    double balance, sum, rate;
    int manner, year;
    printf("可按以下5种办法存:\n(1)一次存5年期。\n(2)先存2年期,到期后将本息再存3年期\n(3)先存3年期,到期后将本息再存2年期\n(4)存1年期,到期后将本息再存1年期,连续存5次。\n(5)存活期存款。活期利息每一季度结算一次。\n");
    printf("请选择您的存款方式(1~5)\n");
    scanf("%d", &manner);
    getchar();
    printf("请输入您的余额：");
    scanf("%lf", &balance);
    getchar();
    if (manner == 1)
    {
        rate = 0.03;
        sum = pow((1 + rate), 5) * balance;
    }
    else if (manner == 2)
    {
        rate = 0.021;
        sum = pow((1 + rate), 2) * balance;
        rate = 0.0275;
        sum = pow((1 + rate), 3) * sum;
    }
    else if (manner == 3)
    {
        rate = 0.0275;
        sum = pow((1 + rate), 3) * balance;
        rate = 0.021;
        sum = pow((1 + rate), 2) * sum;
    }
    else if (manner == 4)
    {
        rate = 0.015;
        sum = pow((1 + rate), 5) * balance;
    }
    else if (manner == 5)
    {
        rate = 0.003500;
        sum = pow((1 + rate / 4.000000), 20) * balance;
    }
    else
        printf("你输错了！");

    printf("连本带息共有：%.2f元", sum);
    return 0;
}