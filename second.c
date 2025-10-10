#include <stdio.h>

int main()
{

    int age = 19;
    int year = 2025;
    int quantity = 1;

    printf("The year is %d.\n", year);
    printf("You are %d years old.\n", age);
    printf("You have ordered %d x items.\n", quantity);

    float gpa = 2.5;
    float price = 19.99;
    float tenperature = -10.1;
    printf("The price is ￥%f.\n", price);
    printf("Your gpa is %f.\n", gpa);
    printf("The temperature is %f℃.\n", tenperature);

    double pie = 3.14159265358979;
    double e = 2.7182818284590;
    printf("The value of pie is %.15lf.\n", pie);
    printf("The value of e is %.15lf.\n", e);
    char grade = 'A';
    char symbol = '!';
    char currency = '￥';
    printf("You grade is %c.\n", grade);
    printf("You favourate symbol is %c.\n", symbol);
    printf("The currency is %c.\n", currency);
    char name[] = "Gan Yuntao";
    char food[] = "Stir-fried tomato and scrambled eggs";
    printf("Hello %s.\n", name);
    printf("You favourate food is %s.\n", food);

    return 0;
}