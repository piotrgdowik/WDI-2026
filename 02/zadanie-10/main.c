#include <stdio.h>
//Zaimplementuj funkcję potega(liczba, wykladnik), która będzie iteracyjnie liczyć wartość potęgi o podanych parametrach.
long long potega(int liczba,int wyk)
{
    long long s=1;
    for(int i=1;i<=wyk;i++)
        s*=liczba;
    return s;
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
