#include <stdio.h>
float sr(int tab[],int n)
{
    float sr=0;
    for(int i=0;i<n;i++)
        sr+=tab[i];
    return sr/=n;
}
int main()
{

    int tab[5];
    int a;
    
    for (int i = 0; i < 5; i++) 
        {
            printf("Podaj liczbe %d. liczb:\n",i+1);
            scanf("%d",&tab[i]);
        }
    printf("Srednia podanych liczb wynosi %.2f \n",sr(tab,5));
    for (int i = 0; i < 5; i++)
        if(tab[i]>sr(tab,5))
            printf("Liczba %d. jest wieksza od sredniej\n",tab[i]);
    return 0;
}
