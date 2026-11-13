#include <stdio.h>
int main() 
{
    char imie[30];

    printf("Podaj imie: ");
    scanf("%29s", imie);

    if(imie[0]>=97&& imie[0] <= 122)
        imie[0]=imie[0]-32;

    for (int i = 1; imie[i] != '\0'; i++) 
        if(imie[i]<97)
            imie[i]=imie[i]+32;

    printf("%s\n", imie);

    return 0;
}
