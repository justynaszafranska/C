#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj pierwszą godzinę: ");
    float a;
    scanf("%f", &a);

    printf("Podaj drugą godzinę: ");
    float b;
    scanf("%f", &b);

    printf("Podaj znak operacji, którą chcesz wykonać:");
    char znak;
    scanf("%s", &znak);

    double wynik;

    switch(znak)
    {
    case '+':
        wynik = a + b;
        break;
    case '-':
        wynik = a - b;
        break;
    case '*':
        wynik = a * b;
        break;
    case '/':
        wynik = a / b;
        break;
    default:
        printf("Niepoprawny znak równania");
    }

int godziny = wynik;

    if(godziny >= 24.00)
    {
        godziny = wynik - 24.00;
    }
    else
    {
        godziny = wynik;
    }

    int y;
    y = wynik;

    double koncowy_wynik;

    double minuty = wynik - y;

    if(minuty >= 0.60)
    {
        minuty = minuty - 0.60;
        godziny = godziny + 1.00; //minela godzina
        printf("%.2f %c %.2f = %.2f", a, znak, b, godziny+minuty);
    }
    else
    {
        printf("%.2f %c %.2f = %.2f", a, znak, b, godziny+minuty);
    }

    return 0;

}

