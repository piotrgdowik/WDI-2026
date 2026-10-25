#include <stdio.h>

int main() 
{
    float a, b;
    char znak;

    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &a);
    printf("Podaj druga liczbe: ");
    scanf("%f", &b);
    printf("Podaj znak dzialania (+, -, *, /, %): ");
    scanf(" %c", &znak); 

    if (znak == '+') 
        printf("Wynik: %.2f\n", a + b);
    else if (znak == '-') 
        printf("Wynik: %.2f\n", a - b);
    else if (znak == '*') 
        printf("Wynik: %.2f\n", a * b);
    else if (znak == '/') 
    {
        if (b == 0) 
            printf("Nie mozna dzielic przez zero\n");
        else
            printf("Wynik: %.2f\n", a / b);
    } 
    else if (znak == '%') 
    {
        if ((int)b == 0) 
            printf("Nie mozna dzielic przez zero\n");
        else 
            printf("Wynik: %d\n", (int)a % (int)b);
        
    }
    else 
        printf("Bledny znak\n");
    
    return 0;
}
