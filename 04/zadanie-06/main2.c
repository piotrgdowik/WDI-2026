#include <stdio.h>
void szyfruj(char tekst[], int klucz) 
{
    for (int i = 0; tekst[i] != '\0' && tekst[i] != '\n'; i++) 
    {
        if (tekst[i] >= 'a' && tekst[i] <= 'z')
            tekst[i] = 'a' + (tekst[i] - 'a' + klucz % 26 + 26) % 26;
        else if (tekst[i] >= 'A' && tekst[i] <= 'Z') 
            tekst[i] = 'A' + (tekst[i] - 'A' + klucz % 26 + 26) % 26;
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

    while (getchar() != '\n');

    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin); 

    szyfruj(tekst, klucz);
    printf("Zaszyfrowany tekst: %s", tekst);

    deszyfruj(tekst, klucz);
    printf("Odszyfrowany tekst: %s", tekst);

    return 0;
}
