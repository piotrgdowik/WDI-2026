#include <stdio.h>

int main()
{
    int a;

    printf("Podaj liczbe calkowita:\n");
    scanf("%d", &a);
 
    if (a%2==0&&a>0) 
        printf("Liczba jest jednoczesnie dodatnia i parzysta\n");
    else 
        printf("Liczba NIE jest jednoczesnie dodatnia i parzysta\n");

    return 0;
}
