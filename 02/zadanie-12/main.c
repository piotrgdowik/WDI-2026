#include <stdio.h>
int dodawanie()//dodawanie n liczb;
{
    int n;
    int liczba, suma = 0;
    
    printf("Ile liczb chcesz dodac? ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Bledna ilosc liczb\n");
        return 0;
    }
    
    for (int i = 1; i <= n; i++)
    {
        printf("Podaj liczbe %d: ", i);
        scanf("%d", &liczba);
        suma += liczba;
    }
    return suma;
}

int odejmowanie()// Odejmowanie od liczby aż do momentu podania 0
{
    int li_pocz, odejmowana;
    
    printf("Podaj liczbe poczatkowa: ");
    scanf("%d", &li_pocz);
    
    printf("Podaj kolejne liczby (0 - KONIEC):\n");
    while (1) 
    {
        printf("Odejmij: ");
        scanf("%d", &odejmowana);
        if (odejmowana == 0)
            break;
        li_pocz -= odejmowana;
    }
    return li_pocz;
}

int mnozenie(int a, int b) //Mnożenie dwóch liczb
{
    return a * b;
}

void dzielenie()//Dzielenie dwóch liczb
{
    double a, b;
    printf("Podaj dzielna i dzielnik: ");
    if (scanf("%lf %lf", &a, &b) == 2)
    {
        if (b == 0.0) 
            printf("Blad: Nie mozna dzielic przez zero\n");
        else 
            printf("Wynik dzielenia: %.2lf\n", a / b);
        
    }
}

long long potega(int liczba,int wyk)//Potęgowanie 
{
    if(wyk==0)
        return 1;
    else
        return liczba *potega(liczba,wyk-1);
}

int kwadrat(int a) // Kwadrat liczby
{
    return a * a;
}

 
long long silnia(int n)// Silnia
{
    long long s = 1;
    for (int i = 2; i <= n; i++) 
        s *= i;
    
    return s;
}

int main()
{
    int opcja;

    do
    {
        printf("\n================ KALKULATOR ================\n");
        printf("1. Dodawanie n liczb\n");
        printf("2. Odejmowanie(do podania 0)\n");
        printf("3. Mnozenie dwoch liczb\n");
        printf("4. Dzielenie liczby\n");
        printf("5. Potgowanie\n");
        printf("6. Kwadrat liczby\n");
        printf("7. Silnia\n");
        printf("0. Wyjscie\n");
        printf("============================================\n");
        printf("Wybierz opcje: ");

        if (scanf("%d", &opcja) != 1) 
        {
            printf("Nieprawidlowy format danych\n");
            break;
        }

        printf("\n");

        switch (opcja) 
        {
            case 1: 
            {
                printf("Wynik dodawania: %d\n", dodawanie());
                break;
            }
            case 2:
            {
                printf("Wynik koncowy odejmowania: %d\n", odejmowanie());
                break;
            }
            case 3:
            {
                int a, b;
                printf("Podaj dwie liczby do pomnozenia: ");
                scanf("%d %d", &a, &b);
                printf("Wynik mnozenia: %d\n", mnozenie(a, b));
                break;
            }
            case 4: 
            {
                dzielenie();
                break;
            }
            case 5:
            {
                int licz;
                int wyk;
                printf("Podaj podstawe i wykladnik : ");
                scanf("%d %d", &licz, &wyk);
                printf("%d do potegi %d wynosi: %lld\n", licz, wyk, potega(licz, wyk));
                break;
            }
            case 6: 
            {
                int a;
                printf("Podaj liczbe: ");
                scanf("%d", &a);
                printf("Kwadrat liczby %d wynosi: %d\n", a, kwadrat(a));
                break;
            }
            case 7:
            {
                int n;
                printf("Podaj liczbe: ");
                scanf("%d", &n);
                printf("Silnia liczby %d wynosi: %lld\n", n,silnia(n));
                break;
            }
            case 0:
                printf("Koniec programu\n");
                break;
            default:
                printf("Niepoprawny wybor\n");
                break;
        }
    } while (opcja != 0);

    return 0;
}
