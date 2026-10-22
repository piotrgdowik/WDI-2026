#include <stdio.h>

int main()
{
    int wiek;
    char pli;
    
    printf("Podaj pierwsza litere imienia: \n");
    scanf("%c", &pli);
    
    printf("Podaj swoj wiek: \n");
    scanf("%d", &wiek);
    
    printf("Inicjal: %c, wiek: %d \n",pli,wiek);
    
    return 0;
}
