#include <stdio.h>
#include <math.h>
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main()
{
    double d1, d2, d3, d4, x1, y1;
    scanf("%lf %lf", &x1, &y1);
    d1 = distance(x1, y1, 2, 2);
    d2 = distance(x1, y1, 2, -2);
    d3 = distance(x1, y1, -2, 2);
    d4 = distance(x1, y1, -2, -2);
    if ((d1 <= 1) || (d2 <= 1) || (d3 <= 1) || (d4 <= 1))
    {
        printf("10m");
    }
    else
    {
        printf("0m");
    }
    return 0;
}
