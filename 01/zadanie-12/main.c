#include <stdio.h>

int main()
{
    int a;
    int suma=0;
    
    printf("Podaj liczbe:\n");
    scanf("%d", &a);
 
    while(a>0)
    {
        a--;
        suma+=a;
    }
    printf("Suma wynosi: %d",suma);
    return 0;
}
