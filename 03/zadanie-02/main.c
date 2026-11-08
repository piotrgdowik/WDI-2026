#include <stdio.h>
long long fun(int n)
{
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else if(n==3)
        return 3;
    else
        return fun(n-1)*fun(n-2)-fun(n-3);
}
int main()
{
    int n;
    
    printf("Podaj liczbe:");
    if(scanf("%d",&n)!=1)
        printf("Bledne dane");
    else
        printf("Funkcja dla n = %d przyjmuje wartosc %lld",n,fun(n));
    return 0;
}
