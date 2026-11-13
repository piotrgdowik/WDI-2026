#include <stdio.h>
void szyfruj(char tekst[], int klucz) 
{
    for (int i = 0; tekst[i] != '\0' && tekst[i] != '\n'; i++) 
    {
        char znak = tekst[i];
        
        if (znak >= 'a' && znak <= 'z')
            znak = (znak - 97 + klucz) % 26;
        else if (znak >= 'A' && znak <= 'Z') 
            znak = (znak - 'A' + klucz) % 26;
    }
}
void deszyfruj(char tekst[], int klucz) 
{
    szyfruj(tekst, -klucz);
}

int main()
{
    char tekst[100];
    int klucz;

    printf("Podaj klucz: ");
    scanf("%d", &klucz);

    printf("Podaj tekst: ");
    scanf("%99s", tekst); 

    szyfruj(tekst, klucz);
    printf("Zaszyfrowany tekst: %s\n", tekst);

    deszyfruj(tekst, klucz);
    printf("Odszyfrowany tekst: %s\n", tekst);
}
