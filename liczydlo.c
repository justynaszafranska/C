#include <stdio.h>
#include <math.h>

int main()
{
    printf("Wprowadz liczbe: ");
    double pow(double x, double y); //x to liczba, y to potega
    int liczba, wynik;
    scanf("%d", &liczba);

    if(liczba< 0)
    {
        //kwadrat
        wynik = pow(liczba, 2); //liczba, do ktorej potegi
        printf("Kwadrat liczby to: %d", wynik);
    }
    else{
        //silnia
        wynik = 1;

        for(int i=liczba;i>1;i--)
            wynik = wynik * i;
        //system("pause");
        printf("Silnia liczby to: %d", wynik);
    }

    return 0;
}
