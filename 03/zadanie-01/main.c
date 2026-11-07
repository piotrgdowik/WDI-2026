#include <stdio.h>
long long suma_fib(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    long long suma = 1;
    long long a = 0;
    long long b = 1;

    for (int i = 2; i <= n; i++)
    {
        long long temp = a + b;
        suma += temp;
        a = b;
        b = temp;
    }
    
    return suma;
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    
    printf("Suma pierwszych %d wyrazow ciagu Fibonacciego wynosi: %lld\n", n, suma_fib(n));

    return 0;
}
