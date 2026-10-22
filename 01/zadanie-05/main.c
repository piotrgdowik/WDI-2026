#include <stdio.h>

int main()
{
    int a;
    float sr;

    
    printf("Podaj 5 ocen: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &a);
        sr+=a;
    } 
    sr/=5;
    printf("Srednia ocen to: %.2f \n",sr);
    
    return 0;
}
