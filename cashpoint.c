#include <stdio.h>

int main()
{
    printf("Enter the amount: ");
    float amount;
    scanf("%f", &amount);
    float amount_poczatkowa = amount;

    int hm_500=0, hm_200=0,hm_100=0,hm_50=0,hm_20=0, hm_10=0, hm_5=0, hm_2=0, hm_1=0, hm_50gr=0, hm_20gr=0, hm_10gr=0, hm_5gr=0, hm_2gr=0, hm_1gr=0;

    while(amount>=500)
    {
       hm_500+=1;
       amount = amount - 500;
    }

    while(amount>=200)
    {
       hm_200+=1;
       amount = amount - 200;
    }

    while(amount>=100)
    {
        hm_100+=1;
        amount = amount - 100;
    }
    while(amount>=50)
    {
        hm_50+=1;
        amount = amount - 50;
    }
    while(amount>=20)
    {
        hm_20+=1;
        amount = amount - 20;
    }
    while(amount>=10)
    {
        hm_10+=1;
        amount = amount - 10;
    }
    while(amount>=5)
    {
        hm_5+=1;
        amount = amount - 5;
    }
    while(amount>=2)
    {
        hm_2+=1;
        amount = amount - 2;
    }
    while(amount>=1)
    {
        hm_1+=1;
        amount = amount - 1;
    }
    while(amount>=0.5)
    {
        hm_50gr+=1;
        amount = amount - 0.5;
    }
    while(amount>=0.2)
    {
        hm_20gr+=1;
        amount = amount - 0.2;
    }
    while(amount>=0.1)
    {
        hm_10gr+=1;
        amount = amount - 0.1;
    }
    while(amount>=0.05)
    {
        hm_5gr+=1;
        amount = amount - 0.05;
    }
    while(amount>=0.02)
    {
        hm_2gr+=1;
        amount = amount - 0.02;
    }
    while(amount>=0.01)
    {
        hm_1gr+=1;
        amount = amount - 0.01;
    }

    printf("%.2f:", amount_poczatkowa);

    if(hm_500 > 0)
        printf("(%dx 500zl)", hm_500);
    if(hm_200 > 0)
        printf("(%dx 200zl)", hm_200);
    if(hm_100 > 0)
        printf("(%dx 100zl)", hm_100);
    if(hm_50 > 0)
        printf("(%dx 50zl)", hm_50);
    if(hm_20 > 0)
        printf("(%dx 20zl)", hm_20);
    if(hm_10 > 0)
        printf("(%dx 10zl)", hm_10);
    if(hm_5 > 0)
        printf("(%dx 5zl)", hm_5);
    if(hm_2 > 0)
        printf("(%dx 2zl)", hm_2);
    if(hm_1 > 0)
        printf("(%dx 1zl)", hm_1);
    if(hm_50gr > 0)
        printf("(%dx 50gr)", hm_50gr);
    if(hm_20gr > 0)
        printf("(%dx 20gr)", hm_20gr);
    if(hm_10gr > 0)
        printf("(%dx 10gr)", hm_10gr);
    if(hm_5gr > 0)
        printf("(%dx 5gr)", hm_5gr);
    if(hm_2gr > 0)
        printf("(%dx 2gr)", hm_2gr);
    if(hm_1gr > 0)
        printf("(%dx 1gr)", hm_1gr);

    return 0;

}
