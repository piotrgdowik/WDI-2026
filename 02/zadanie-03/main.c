#include <stdio.h>

    //Zaimplementuj kalkulator, w którym użytkownik podaje 2 liczby, następnie podaje znak działania jakie chce wykonać (+, -, *, /, %).
    //Wykorzystaj instrukcję switch case. Program wykonuje działanie i wyświetla wynik.
    
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

    switch(znak)
    {
    case '+':
        printf("Wynik: %.2f\n", a + b);
        break;
    case '-':
        printf("Wynik: %.2f\n", a - b);
        break;
    case '*': 
        printf("Wynik: %.2f\n", a * b);
        break;
    case '/': 
        if (b == 0) 
            printf("Nie mozna dzielic przez zero\n");
        else
            printf("Wynik: %.2f\n", a / b);
        break;
    case '%': 
        if ((int)b == 0) 
            printf("Nie mozna dzielic przez zero\n");
        else 
            printf("Wynik: %d\n", (int)a % (int)b);
        break;
    default: 
        printf("Bledny znak\n");
        break;
    }
    
    
    return 0;
}
