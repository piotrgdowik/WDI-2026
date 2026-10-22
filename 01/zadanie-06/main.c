#include <stdio.h>

int main()
{
    int a;


    printf("Podaj liczbe sekund: \n");

    scanf("%d", &a);
    
    printf("Liczba godzin: %d \nLiczba minut: %d \nLiczba sekund: %d \n",a/3600,(a%3600)/60,a%60);
    return 0;
}
