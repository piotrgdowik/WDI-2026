#include <stdio.h>

int main() 
{
    int a, b;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    if (b == 0) 
        printf("Druga liczba to zero(nie mozna dzielic przez 0)\n");
    else if (a % b == 0) 
        printf("Liczba %d jest podzielna przez %d.\n", a, b);
    else 
        printf("Liczba %d NIE jest podzielna przez %d.\n", a, b);
    

    return 0;
}
