#include <stdio.h>
int main()
{
    float a = 0, b = 0;
    char znak='+'; 
    int opcja;
    int zmiana = 0;//czy zostala zmieniona liczba lub znak

    do
    {
        if (zmiana) //odswiezenie wyniku dzialania
        {
            printf("\n----------------------------------------\n");
            printf("AKTUALNY WYNIK dla (%.2f %c %.2f):\n", a, znak, b);
            
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
            }
            printf("----------------------------------------\n");
        }
        //wyswietlacz opcji
        printf("\n=== MENU KALKULATORA ===\n");
        printf("1. Zmien pierwsza liczbe (obecnie: %.2f)\n", a);
        printf("2. Zmien druga liczbe (obecnie: %.2f)\n", b);
        printf("3. Wybierz dzialanie (obecnie: %c)\n", znak);
        printf("4. Zakoncz program\n");
        printf("Wybierz opcje (1-4): ");
        
        
        scanf("%d", &opcja);
        switch(opcja)
        {
            case 1:
                printf("Podaj nowa pierwsza liczbe: ");
                scanf("%f", &a);
                zmiana = 1;
                break;
                
            case 2:
                printf("Podaj nowa druga liczbe: ");
                scanf("%f", &b);
                zmiana = 1;
                break;
                
            case 3:
                char test;
                do
                {
                printf("Podaj znak dzialania (+, -, *, /, %): ");
                scanf(" %c", &test);
                }while(test!='+'&&test!='-'&&test!='*'&&test!='/'&&test!='%');
                znak=test;
                zmiana = 1;
                break;
                
            case 4:
                printf("Zamykanie programu\n");
                break;
                
            default:
                printf("Nie ma takiej opcji w menu. Wybierz liczbe od 1 do 4\n");
        }

    } while (opcja != 4);

    return 0;
}
