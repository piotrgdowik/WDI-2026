#include <stdio.h>
//Zaimplementuj funkcję silnia(a), która będzie iteracyjnie (przy pomocy pętli) liczyć wartość silni z podanej liczby.
long long silnia(int a)
{
    int s=1;
    for(int i=2;i<=a;i++)
        s*=i;
    return s;
}
int main() 
{
    int a;
    
    printf("Podaj liczbe:\n");
    scanf("%d",&a);
    
    printf("Silnia licby %d wynosi %lld",a,silnia(a));
    
    return 0;
}
