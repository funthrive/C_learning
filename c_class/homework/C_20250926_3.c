#include <stdio.h>
#include <math.h>
int main()
{
    double loan_value, monthly_repayment, monthly_interest_rate, month;

    printf("请输入您的贷款额：");
    scanf("%lf", &loan_value);
    getchar();
    printf("请输入您的月还款额：");
    scanf("%lf", &monthly_repayment);
    getchar();
    printf("请输入您的月利率（如0.1%c输入0.1）：", 37);
    scanf("%lf", &monthly_interest_rate);
    getchar();
    month = log10(monthly_repayment / (monthly_repayment - loan_value * monthly_interest_rate / 100)) / log10(1 + monthly_interest_rate / 100);
    long monthi = (long)round(month);
    printf("您需要%ld月还清您的贷款。", monthi);

    return 0;
}