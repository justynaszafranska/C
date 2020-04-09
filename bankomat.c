#include <stdio.h>

int main()
{
    printf("Podaj kwote: ");
    float kwota;
    scanf("%f", &kwota);
    float kwota_poczatkowa = kwota;

    int ile_500=0, ile_200=0,ile_100=0,ile_50=0,ile_20=0, ile_10=0, ile_5=0, ile_2=0, ile_1=0, ile_50gr=0, ile_20gr=0, ile_10gr=0, ile_5gr=0, ile_2gr=0, ile_1gr=0;

    while(kwota>=500)
    {
       ile_500+=1;
       kwota = kwota - 500;
    }

    while(kwota>=200)
    {
       ile_200+=1;
       kwota = kwota - 200;
    }

    while(kwota>=100)
    {
        ile_100+=1;
        kwota = kwota - 100;
    }
    while(kwota>=50)
    {
        ile_50+=1;
        kwota = kwota - 50;
    }
    while(kwota>=20)
    {
        ile_20+=1;
        kwota = kwota - 20;
    }
    while(kwota>=10)
    {
        ile_10+=1;
        kwota = kwota - 10;
    }
    while(kwota>=5)
    {
        ile_5+=1;
        kwota = kwota - 5;
    }
    while(kwota>=2)
    {
        ile_2+=1;
        kwota = kwota - 2;
    }
    while(kwota>=1)
    {
        ile_1+=1;
        kwota = kwota - 1;
    }
    while(kwota>=0.5)
    {
        ile_50gr+=1;
        kwota = kwota - 0.5;
    }
    while(kwota>=0.2)
    {
        ile_20gr+=1;
        kwota = kwota - 0.2;
    }
    while(kwota>=0.1)
    {
        ile_10gr+=1;
        kwota = kwota - 0.1;
    }
    while(kwota>=0.05)
    {
        ile_5gr+=1;
        kwota = kwota - 0.05;
    }
    while(kwota>=0.02)
    {
        ile_2gr+=1;
        kwota = kwota - 0.02;
    }
    while(kwota>=0.01)
    {
        ile_1gr+=1;
        kwota = kwota - 0.01;
    }

    printf("%.2f:", kwota_poczatkowa);

    if(ile_500 > 0)
        printf("(%dx 500zl)", ile_500);
    if(ile_200 > 0)
        printf("(%dx 200zl)", ile_200);
    if(ile_100 > 0)
        printf("(%dx 100zl)", ile_100);
    if(ile_50 > 0)
        printf("(%dx 50zl)", ile_50);
    if(ile_20 > 0)
        printf("(%dx 20zl)", ile_20);
    if(ile_10 > 0)
        printf("(%dx 10zl)", ile_10);
    if(ile_5 > 0)
        printf("(%dx 5zl)", ile_5);
    if(ile_2 > 0)
        printf("(%dx 2zl)", ile_2);
    if(ile_1 > 0)
        printf("(%dx 1zl)", ile_1);
    if(ile_50gr > 0)
        printf("(%dx 50gr)", ile_50gr);
    if(ile_20gr > 0)
        printf("(%dx 20gr)", ile_20gr);
    if(ile_10gr > 0)
        printf("(%dx 10gr)", ile_10gr);
    if(ile_5gr > 0)
        printf("(%dx 5gr)", ile_5gr);
    if(ile_2gr > 0)
        printf("(%dx 2gr)", ile_2gr);
    if(ile_1gr > 0)
        printf("(%dx 1gr)", ile_1gr);

    return 0;

}
