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

    printf("Powtorzenia: ");
    for(int j=0; j<ilosc; j++)
    {
        for(int k = j+1; k < ilosc; k++)
        {
            if(liczby_naturalne[j] == liczby_naturalne[k])
            {
                printf("%d ", liczby_naturalne[j]);
            }
        }
    }

    return 0;
}
