#include <stdio.h>
long long potega(int liczba,int wyk)
{
    if(wyk==0)
        return 1;
    else
        return liczba *potega(liczba,wyk-1);
}
int main() 
{
    int liczba;
    int wyk;
    printf("Podaj liczbe i (dodatni)wykladnik:\n");
    
    if(scanf("%d %d",&liczba,&wyk)==2)
        printf("%d do potegi %d wynosi %lld",liczba,wyk,potega(liczba,wyk));
    else 
        printf("Błądne dane\n");
    return 0;
}
