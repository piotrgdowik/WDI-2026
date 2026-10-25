#include <stdio.h>

int main() 
{
    int n;
    int liczba, suma = 0;

    printf("Ile liczb chcesz podac? ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Ilosc liczb musi byc wieksza od zera\n");
        return 0;
    }

    for (int i = 0; i < n; i++) 
    {
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);
        suma += liczba;
    }

    printf("Suma podanych liczb: %d\n", suma);
    printf("Srednia podanych liczb: %.2f\n", (float)suma / n);

    return 0;
}
