#include <stdio.h>

int main()
{
    int a,b;


    printf("Podaj dwie liczby calkowite: \n");

    scanf("%d", &a);
    scanf("%d", &b);
    
    if(a==b)
        printf("Liczba wieksza: %d \nLiczba mniejsz: %d \nrelacja: rowne \n",a,a);
    else if(a>b)
        printf("Liczba wieksza: %d \nLiczba mniejsz: %d \nrelacja: %d > %d \n",a,b,a,b);
    else
        printf("Liczba wieksza: %d \nLiczba mniejsz: %d \nrelacja: %d > %d \n",b,a,b,a);
    return 0;
}
