#include <stdio.h>
int suma(int a)
{
    int w=0;
    while(a!=0)
    {
        w+=a%10;
        a/=10;
    }
    return w;
}
int main() 
{
    int a;
    printf("Podaj liczbe:");
    scanf("%d", &a);
    
    printf("Liczba: %d ma sume cyfr rowna: %d",a,suma(a));
    
    
    return 0;
}
