#include <stdio.h>

int main()
{
    float liczba;
    
    printf("Podaj liczbe zmiennoprzecinkowa: \n");
    scanf("%f", &liczba);
    
    printf("Z dokladnoscia do 1 miejsca: %.1f \n",liczba);
    printf("Z dokladnoscia do 3 miejsca: %.3f \n",liczba);
    printf("Z dokladnoscia do 5 miejsca: %.5f \n",liczba);
    
    return 0;
}
