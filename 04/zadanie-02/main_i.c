#include <stdio.h>
#include <ctype.h>
int main() 
{
    char imie[30];

    printf("Podaj imie: ");
    scanf("%29s", imie);

    imie[0] = toupper((unsigned char)imie[0]);

    for (int i = 1; imie[i] != '\0'; i++) 
        imie[i] = tolower((unsigned char)imie[i]);

    printf("%s\n", imie);

    return 0;
}
