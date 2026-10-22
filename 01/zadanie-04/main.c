#include <stdio.h>

int main()
{
    int licz1, licz2, licz3;

    
    printf("Podaj trzy liczby calkowite: \n");
    scanf("%d", &licz1);
    scanf("%d", &licz2);
    scanf("%d", &licz3);
    
    printf("Suma rowna sie: %d \nRoznica pierwszych dwoch: %d \nIloczyn pierwszej i trzeciej:%d \n",licz1 + licz2 + licz3,licz1 - licz2,licz1 * licz3);
    if(licz2!=0)
        printf("Iloraz trzeciej i drugiej to: %.2f \n", (float)licz3/licz2);
    else
        printf("Nie wolno dzielic przez 0 \n");
    return 0;
}
