#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter first hour: ");
    float a;
    scanf("%f", &a);

    printf("Enter second hour: ");
    float b;
    scanf("%f", &b);

    printf("Enter the character of the operation you want to perform: ");
    char sign;
    scanf("%s", &sign);

    double result;

    switch(sign)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("Incorrect sign");
    }

int hours = result;

    if(hours >= 24.00)
    {
        hours = result - 24.00;
    }
    else
    {
        hours = result;
    }

    int y;
    y = result;

    double final_result;

    double minutes = result - y;

    if(minutes >= 0.60)
    {
        minutes = minutes - 0.60;
        hours = hours + 1.00;
        printf("%.2f %c %.2f = %.2f", a, sign, b, hours+minutes);
    }
    else
    {
        printf("%.2f %c %.2f = %.2f", a, sign, b, hours+minutes);
    }

    return 0;

}
