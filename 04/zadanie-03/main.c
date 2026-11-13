#include <stdio.h>
int main()
{
    char tekst[200];
    int licznik[26] = {0};

    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);

    for (int i = 0; tekst[i] != '\0'; i++) 
    {
        char znak = tekst[i];
        if (znak >= 65 && znak <= 90)
            znak = znak + 32;
        if (znak >= 97 && znak <= 122)
            licznik[znak - 97]++;
    }
    
    printf("\nWyniki:\n");
    for (int i = 0; i < 26; i++)
        if (licznik[i] > 0)
            printf("%c: %d\n", i + 97, licznik[i]);

    return 0;
}
