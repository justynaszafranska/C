#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj kwotę do 999: ");
    int kwota;
    scanf("%d", &kwota);
    int kwota_poczatkowa = kwota;

    
    int ile_900=0,ile_800=0, ile_700=0, ile_600=0, ile_500=0, ile_400=0, ile_300=0, ile_200=0,ile_100=0,
    ile_90=0, ile_80=0, ile_70=0, ile_60=0, ile_50=0, ile_40=0, ile_30=0, ile_20=0, ile_10=0,
    ile_11=0, ile_12=0, ile_13=0, ile_14=0, ile_15=0, ile_16=0, ile_17=0, ile_18=0, ile_19=0,
    ile_9=0, ile_8=0, ile_7=0, ile_6=0, ile_5=0, ile_4=0, ile_3=0, ile_2=0, ile_1=0;

if(kwota<999)
{
    if(kwota>=900)
    {
       ile_900+=1;
       kwota = kwota - 900;
    }
    if(kwota>=800)
    {
       ile_800+=1;
       kwota = kwota - 800;
    }
    if(kwota>=700)
    {
       ile_700+=1;
       kwota = kwota - 700;
    }
    if(kwota>=600)
    {
       ile_600+=1;
       kwota = kwota - 600;
    }
    if(kwota>=500)
    {
       ile_500+=1;
       kwota = kwota - 500;
    }
    if(kwota>=400)
    {
       ile_400+=1;
       kwota = kwota - 400;
    }
    if(kwota>=300)
    {
       ile_300+=1;
       kwota = kwota - 300;
    }
    if(kwota>=200)
    {
       ile_200+=1;
       kwota = kwota - 200;
    }
    if(kwota>=100)
    {
        ile_100+=1;
        kwota = kwota - 100;
    }
    if(kwota>=90)
    {
        ile_90+=1;
        kwota = kwota - 90;
    }
    if(kwota>=80)
    {
        ile_80+=1;
        kwota = kwota - 80;
    }
    if(kwota>=70)
    {
        ile_70+=1;
        kwota = kwota - 70;
    }
    if(kwota>=60)
    {
        ile_60+=1;
        kwota = kwota - 60;
    }
    if(kwota>=50)
    {
        ile_50+=1;
        kwota = kwota - 50;
    }
    if(kwota>=40)
    {
        ile_40+=1;
        kwota = kwota - 40;
    }
    if(kwota>=30)
    {
        ile_30+=1;
        kwota = kwota - 30;
    }
    if(kwota>=20)
    {
        ile_20+=1;
        kwota = kwota - 20;
    }
    if(kwota>=19)
    {
        ile_19+=1;
        kwota = kwota - 19;
    }
    if(kwota>=18)
    {
        ile_18+=1;
        kwota = kwota - 18;
    }
    if(kwota>=17)
    {
        ile_17+=1;
        kwota = kwota - 17;
    }
    if(kwota>=16)
    {
        ile_16+=1;
        kwota = kwota - 16;
    }
    if(kwota>=15)
    {
        ile_15+=1;
        kwota = kwota - 15;
    }
    if(kwota>=14)
    {
        ile_14+=1;
        kwota = kwota - 14;
    }
    if(kwota>=13)
    {
        ile_13+=1;
        kwota = kwota - 13;
    }
    if(kwota>=12)
    {
        ile_12+=1;
        kwota = kwota - 12;
    }
    if(kwota>=11)
    {
        ile_11+=1;
        kwota = kwota - 11;
    }
    if(kwota>=10)
    {
        ile_10+=1;
        kwota = kwota - 10;
    }
    if(kwota>=9)
    {
        ile_9+=1;
        kwota = kwota - 9;
    }
    if(kwota>=8)
    {
        ile_8+=1;
        kwota = kwota - 8;
    }
    if(kwota>=7)
    {
        ile_7+=1;
        kwota = kwota - 7;
    }
    if(kwota>=6)
    {
        ile_6+=1;
        kwota = kwota - 6;
    }
    if(kwota>=5)
    {
        ile_5+=1;
        kwota = kwota - 5;
    }
    if(kwota>=4)
    {
        ile_4+=1;
        kwota = kwota - 4;
    }
    if(kwota>=3)
    {
        ile_3+=1;
        kwota = kwota - 3;
    }
    if(kwota>=2)
    {
        ile_2+=1;
        kwota = kwota - 2;
    }
    if(kwota>=1)
    {
        ile_1+=1;
        kwota = kwota - 1;
    }

    printf("%d = ", kwota_poczatkowa);


    if(ile_900 > 0)
    {
        printf("dziewięćset ");
    }
    if(ile_800 > 0)
    {
        printf("osiemset ");
    }
    if(ile_700 > 0)
    {
        printf("siedemset ");
    }
    if(ile_600 > 0)
    {
        printf("sześćset ");
    }
    if(ile_500 > 0)
    {
        printf("pięcset ");
    }
    if(ile_400 > 0)
    {
        printf("czterysta ");
    }
    if(ile_300 > 0)
    {
        printf("trzysta ");
    }
    if(ile_200 > 0)
    {
        printf("dwieście ");
    }
    if(ile_100 > 0)
    {
        printf("sto ");
    }
    if(ile_90 > 0)
    {
        printf("dziewiędziesiąt ");
    }
    if(ile_80 > 0)
    {
        printf("osiemdziesiąt ");
    }
    if(ile_70 > 0)
    {
        printf("siedemdziesiąt ");
    }
    if(ile_60 > 0)
    {
        printf("sześćdziesiąt ");
    }
    if(ile_50 > 0)
    {
        printf("pięćdziesiąt ");
    }
    if(ile_40 > 0)
    {
        printf("czterdzieści ");
    }
    if(ile_30 > 0)
    {
        printf("trzydzieści ");
    }
    if(ile_20 > 0)
    {
        printf("dwadzieścia ");
    }
    if(ile_19 > 0)
    {
        printf("dziewiętnaście ");
    }
    if(ile_18 > 0)
    {
        printf("osiemnaście ");
    }
    if(ile_17 > 0)
    {
        printf("siedemnaście ");
    }
    if(ile_16 > 0)
    {
        printf("szesnaście ");
    }
    if(ile_15 > 0)
    {
        printf("piętnaście ");
    }
    if(ile_14 > 0)
    {
        printf("czternaście ");
    }
    if(ile_13 > 0)
    {
        printf("trzynaście ");
    }
    if(ile_12 > 0)
    {
        printf("dwanaście ");
    }
    if(ile_11 > 0)
    {
        printf("jedenaście ");
    }
    if(ile_10 > 0)
    {
        printf("dziesięć ");
    }
    if(ile_9 > 0)
    {
        printf("dziewięć ");
    }
    if(ile_8 > 0)
    {
        printf("osiem ");
    }
    if(ile_7 > 0)
    {
        printf("siedem ");
    }
    if(ile_6 > 0)
    {
        printf("sześć ");
    }
    if(ile_5 > 0)
    {
        printf("pięć ");
    }
    if(ile_4 > 0)
    {
        printf("cztery ");
    }
    if(ile_3 > 0)
    {
        printf("trzy ");
    }
    if(ile_2 > 0)
    {
        printf("dwa ");
    }
    if(ile_1 > 0)
    {
        printf("jeden ");
    }
    
    //dzielenie modulo
    int dzielenie_100 = kwota_poczatkowa%100;
    int dzielenie_10 = kwota_poczatkowa%10;
    
    if(dzielenie_100 == 0)
    {
        printf("złotych");
    }
    if(dzielenie_10 == 0)
    {
        printf("złotych");
    }
    else if(dzielenie_10 == 4 && kwota_poczatkowa != 14)
    {
        printf("złote");
    }
    else if(dzielenie_10 == 3 && kwota_poczatkowa != 13)
    {
        printf("złote");
    }
    else if(dzielenie_10 == 2 && kwota_poczatkowa != 12)
    {
        printf("złote");
    }
    else
    {
        printf("złotych");
    }
}
else
{
    printf("Podana kwota jest zbyt wysoka");
}
    
    return 0;
}
