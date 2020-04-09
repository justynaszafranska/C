#include <stdio.h>
#include <stdlib.h>

int main() {

    int macierz[4][4] =
    {
            {rand()%10, rand()%10, rand()%10, rand()%10},
            {rand()%10, rand()%10, rand()%10, rand()%10},
            {rand()%10, rand()%10, rand()%10, rand()%10},
            {rand()%10, rand()%10, rand()%10, rand()%10}
    };


    int n = 4;

// (a) WYSWIETLANIE MACIERZY
    int i,j;

    printf("Twoja macierz:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", macierz[i][j]);
            if(j == 3)
            {
                printf("\n");
            }
        }
    }

// (b) OBLICZA SUME ELEMENTOW LEZACYCH NA GLOWNEJ PRZEKATNEJ
    int nn = 3;
    int m = 3;
    int suma = 0;

    while(nn>=0)
    {
        suma+= macierz[nn][m];
        nn--;
        m--;
    }
    printf("Suma elementow lezacych na glownej przekatnej: %d", suma);

// (c) OBLICZA SUME ELEMENTOW LEZACYCH NAD GLOWNA TRZEKATNA

    int nn2 = 2;
    int m2 = 3;
    int suma2 = 0;

    while(m2>0)
    {
        suma2+= macierz[m2][nn2];
        nn2--;
        m2--;
    }
    printf("\nSuma elementow lezacych pod glowna przekatna: %d", suma2);

// (d) OBLICZA SUME ELEMENTOW DRUGIEGO WIERSZA

    int nn3 = 3;
    int m3 = 1;
    int suma3 = 0;

    while(nn3 >= 0)
    {
        suma3+= macierz[m3][nn3];
        nn3--;
    }
    printf("\nSuma elementow drugiego wiersza: %d", suma3);

// (e) oblicza sume elementow trzeciej kolumny

    int nn4 = 2;
    int m4 = 4;
    int suma4 = 0;

    while(m4 >= 0)
    {
        suma4+= macierz[nn4][m4];
        m4--;
    }
    printf("\nSuma elementow trzeciej kolumny: %d", suma4);

    return 0;
}
