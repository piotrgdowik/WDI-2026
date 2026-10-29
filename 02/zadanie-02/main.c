#include <stdio.h>
int main()
{
    //Dla podanego n z zakresu 1–100 oblicz 1*1 + 2*2 + ... + n*n za pomocą pętli for. Odrzuć liczbę spoza zakresu.
    int a;
    int suma=0;
    printf("Podaj liczbe z przedzialu(1-100): \n");
    scanf("%d", &a);
    if(a>100||a<1)
        printf("Podana liczba nie jest z przedzialu(1-100) \n");
    else
    {
        for(int i=1;i<=a;i++)
            suma+= i*i;
        printf("Wynik to: %d \n",suma);
    }
    return 0;
}
