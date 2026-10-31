#include <stdio.h>
long long fib(int n)
{
    if(n==0)
        return 0;
    else if(n<3)
        return 1;
    else
        return fib(n-2)+fib(n-1);
}
int main()
{
    int n;
    printf("Podaj liczbe:");
    scanf("%d",&n);
    
    printf("%d. wyraz ciagu fibonaccigo to: %lld",n,fib(n));  
    
    return 0;
}
