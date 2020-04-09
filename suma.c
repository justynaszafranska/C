#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj ilosc elementow: ");
    int ilosc;
    scanf("%d", &ilosc);

    if(ilosc > 100)
    {
        printf("Podales zbyt wiele elementow tablicy!");
    }

    printf("Podaj kolejne elementy oddzielajac je spacja: ");
    int liczby_naturalne[ilosc];

    int i = 0;

    scanf ("%d", &liczby_naturalne[i++]);
    while(getchar() != '\n' && i<ilosc)
    {
        scanf("%d", &liczby_naturalne[i++]);
    }

	int j;
	int wynik_ujemny = 0;
	int wynik_dodatni = 0;

    for (j=0; j<i; j++)
    {
        if(liczby_naturalne[j]>0)
        {
            wynik_dodatni +=liczby_naturalne[j];
        }

        if(liczby_naturalne[j]<0)
        {
            wynik_ujemny += liczby_naturalne[j];
        }
    }


    printf("Suma elementow dodatnich: %d\n", wynik_dodatni);
    printf("Suma elementow ujemnych: %d\n", wynik_ujemny);

return 0;
}
