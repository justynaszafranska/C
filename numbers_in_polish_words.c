#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj kwote do 999: ");
    int amount;
    scanf("%d", &amount);
    int starting_amount = amount;

    
    int how_many_900=0,how_many_800=0, how_many_700=0, how_many_600=0, how_many_500=0, how_many_400=0, how_many_300=0, how_many_200=0,how_many_100=0,
    how_many_90=0, how_many_80=0, how_many_70=0, how_many_60=0, how_many_50=0, how_many_40=0, how_many_30=0, how_many_20=0, how_many_10=0,
    how_many_11=0, how_many_12=0, how_many_13=0, how_many_14=0, how_many_15=0, how_many_16=0, how_many_17=0, how_many_18=0, how_many_19=0,
    how_many_9=0, how_many_8=0, how_many_7=0, how_many_6=0, how_many_5=0, how_many_4=0, how_many_3=0, how_many_2=0, how_many_1=0;

if(amount<999)
{
    if(amount>=900)
    {
       how_many_900+=1;
       amount = amount - 900;
    }
    if(amount>=800)
    {
       how_many_800+=1;
       amount = amount - 800;
    }
    if(amount>=700)
    {
       how_many_700+=1;
       amount = amount - 700;
    }
    if(amount>=600)
    {
       how_many_600+=1;
       amount = amount - 600;
    }
    if(amount>=500)
    {
       how_many_500+=1;
       amount = amount - 500;
    }
    if(amount>=400)
    {
       how_many_400+=1;
       amount = amount - 400;
    }
    if(amount>=300)
    {
       how_many_300+=1;
       amount = amount - 300;
    }
    if(amount>=200)
    {
       how_many_200+=1;
       amount = amount - 200;
    }
    if(amount>=100)
    {
        how_many_100+=1;
        amount = amount - 100;
    }
    if(amount>=90)
    {
        how_many_90+=1;
        amount = amount - 90;
    }
    if(amount>=80)
    {
        how_many_80+=1;
        amount = amount - 80;
    }
    if(amount>=70)
    {
        how_many_70+=1;
        amount = amount - 70;
    }
    if(amount>=60)
    {
        how_many_60+=1;
        amount = amount - 60;
    }
    if(amount>=50)
    {
        how_many_50+=1;
        amount = amount - 50;
    }
    if(amount>=40)
    {
        how_many_40+=1;
        amount = amount - 40;
    }
    if(amount>=30)
    {
        how_many_30+=1;
        amount = amount - 30;
    }
    if(amount>=20)
    {
        how_many_20+=1;
        amount = amount - 20;
    }
    if(amount>=19)
    {
        how_many_19+=1;
        amount = amount - 19;
    }
    if(amount>=18)
    {
        how_many_18+=1;
        amount = amount - 18;
    }
    if(amount>=17)
    {
        how_many_17+=1;
        amount = amount - 17;
    }
    if(amount>=16)
    {
        how_many_16+=1;
        amount = amount - 16;
    }
    if(amount>=15)
    {
        how_many_15+=1;
        amount = amount - 15;
    }
    if(amount>=14)
    {
        how_many_14+=1;
        amount = amount - 14;
    }
    if(amount>=13)
    {
        how_many_13+=1;
        amount = amount - 13;
    }
    if(amount>=12)
    {
        how_many_12+=1;
        amount = amount - 12;
    }
    if(amount>=11)
    {
        how_many_11+=1;
        amount = amount - 11;
    }
    if(amount>=10)
    {
        how_many_10+=1;
        amount = amount - 10;
    }
    if(amount>=9)
    {
        how_many_9+=1;
        amount = amount - 9;
    }
    if(amount>=8)
    {
        how_many_8+=1;
        amount = amount - 8;
    }
    if(amount>=7)
    {
        how_many_7+=1;
        amount = amount - 7;
    }
    if(amount>=6)
    {
        how_many_6+=1;
        amount = amount - 6;
    }
    if(amount>=5)
    {
        how_many_5+=1;
        amount = amount - 5;
    }
    if(amount>=4)
    {
        how_many_4+=1;
        amount = amount - 4;
    }
    if(amount>=3)
    {
        how_many_3+=1;
        amount = amount - 3;
    }
    if(amount>=2)
    {
        how_many_2+=1;
        amount = amount - 2;
    }
    if(amount>=1)
    {
        how_many_1+=1;
        amount = amount - 1;
    }

    printf("%d = ", starting_amount);


    if(how_many_900 > 0)
    {
        printf("dziewięćset ");
    }
    if(how_many_800 > 0)
    {
        printf("osiemset ");
    }
    if(how_many_700 > 0)
    {
        printf("siedemset ");
    }
    if(how_many_600 > 0)
    {
        printf("sześćset ");
    }
    if(how_many_500 > 0)
    {
        printf("pięcset ");
    }
    if(how_many_400 > 0)
    {
        printf("czterysta ");
    }
    if(how_many_300 > 0)
    {
        printf("trzysta ");
    }
    if(how_many_200 > 0)
    {
        printf("dwieście ");
    }
    if(how_many_100 > 0)
    {
        printf("sto ");
    }
    if(how_many_90 > 0)
    {
        printf("dziewiędziesiąt ");
    }
    if(how_many_80 > 0)
    {
        printf("osiemdziesiąt ");
    }
    if(how_many_70 > 0)
    {
        printf("siedemdziesiąt ");
    }
    if(how_many_60 > 0)
    {
        printf("sześćdziesiąt ");
    }
    if(how_many_50 > 0)
    {
        printf("pięćdziesiąt ");
    }
    if(how_many_40 > 0)
    {
        printf("czterdzieści ");
    }
    if(how_many_30 > 0)
    {
        printf("trzydzieści ");
    }
    if(how_many_20 > 0)
    {
        printf("dwadzieścia ");
    }
    if(how_many_19 > 0)
    {
        printf("dziewiętnaście ");
    }
    if(how_many_18 > 0)
    {
        printf("osiemnaście ");
    }
    if(how_many_17 > 0)
    {
        printf("siedemnaście ");
    }
    if(how_many_16 > 0)
    {
        printf("szesnaście ");
    }
    if(how_many_15 > 0)
    {
        printf("piętnaście ");
    }
    if(how_many_14 > 0)
    {
        printf("czternaście ");
    }
    if(how_many_13 > 0)
    {
        printf("trzynaście ");
    }
    if(how_many_12 > 0)
    {
        printf("dwanaście ");
    }
    if(how_many_11 > 0)
    {
        printf("jedenaście ");
    }
    if(how_many_10 > 0)
    {
        printf("dziesięć ");
    }
    if(how_many_9 > 0)
    {
        printf("dziewięć ");
    }
    if(how_many_8 > 0)
    {
        printf("osiem ");
    }
    if(how_many_7 > 0)
    {
        printf("siedem ");
    }
    if(how_many_6 > 0)
    {
        printf("sześć ");
    }
    if(how_many_5 > 0)
    {
        printf("pięć ");
    }
    if(how_many_4 > 0)
    {
        printf("cztery ");
    }
    if(how_many_3 > 0)
    {
        printf("trzy ");
    }
    if(how_many_2 > 0)
    {
        printf("dwa ");
    }
    if(how_many_1 > 0)
    {
        printf("jeden ");
    }
    
    //division modulo
    int division_100 = starting_amount%100;
    int division_10 = starting_amount%10;
    
    if(division_100 == 0)
    {
        printf("złotych");
    }
    if(division_10 == 0)
    {
        printf("złotych");
    }
    else if(division_10 == 4 && starting_amount != 14)
    {
        printf("złote");
    }
    else if(division_10 == 3 && starting_amount != 13)
    {
        printf("złote");
    }
    else if(division_10 == 2 && starting_amount != 12)
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
