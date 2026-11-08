#include <stdio.h>
float obliczSrednia(const int tab[], int n)
{
    float suma = 0;
    for (int i = 0; i < n; i++)
        suma += tab[i];

    return suma / n;
}
void wypwiek(const int tab[], int n, float srednia)
{

    printf("Liczby wieksze od sredniej (%.2f): ", srednia);

    int znaleziono = 0;

    for (int i = 0; i < n; i++) 
        if (tab[i] > srednia)
        {
            printf("%d ", tab[i]);
            znaleziono = 1;
        }

    if (!znaleziono)
        printf("Brak takich liczb.");

    printf("\n");
}
void wypiszMinMax(const int tab[], int n)
{
    int min = tab[0];
    int max = tab[0];

    for (int i = 1; i < n; i++)
    {
        if (tab[i] < min)
            min = tab[i];
        if (tab[i] > max)
            max = tab[i];
    }
    printf("Najmniejsza liczba: %d\n", min);
    printf("Najwieksza liczba: %d\n", max);

}
int sumaNieparzystych(const int tab[], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++) 
        if (tab[i] % 2 != 0)
            suma += tab[i];

    return suma;
}
void wypiszOdTylu(const int tab[], int n)
{
    printf("Tablica od ostatniego elementu: ");

    for (int i = n - 1; i >= 0; i--)
        printf("%d ", tab[i]);

    printf("\n");

}

int main()
{
    const int ROZMIAR = 10;
    int tab[ROZMIAR];

    printf("Podaj %d liczb całkowitych:\n", ROZMIAR);

    for (int i = 0; i < ROZMIAR; i++)
    {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("\n--- WYNIKI ---\n");


    float srednia = obliczSrednia(tab, ROZMIAR);

    printf("1. Srednia arytmetyczna wynosi: %.2f\n", srednia);

    printf("2. ");
    wypwiek(tab, ROZMIAR, srednia);

    printf("3. ");
    wypiszMinMax(tab, ROZMIAR);

    int sumaN = sumaNieparzystych(tab, ROZMIAR);
    printf("4. Suma elementów nieparzystych wynosi: %d\n", sumaN);

    printf("5. ");
    wypiszOdTylu(tab, ROZMIAR);

    return 0;
} 
