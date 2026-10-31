#include <stdio.h>
//Zaimplementuj funkcje max(a,b) i min(a,b), które będą zwracać odpowiednio większą i mniejszą z podanych liczb.
int max(int a,int b)
{
    return (a > b) ? a : b;
}
int min(int a,int b)
{
    return (a < b) ? a : b;
}
int main() 
{
    int a,b;
    
    printf("Podaj dwie liczby:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("Wieksza liczba: %d, mniejsza: %d",max(a,b),min(a,b));
    
    return 0;
}
