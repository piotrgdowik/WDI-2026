#include <stdio.h>
int main()
{
    int a;
    int ile = 0;
    int suma = 0; 
    int max;
    int min;
//rozna od 0
    do 
    {
        printf("Podaj liczbe: \n");
        scanf("%d", &a);
        
        
        if (ile==0)
        {
            max = a;
            min = a;
        }
        else
        {
            if (a > max)
                max = a;
            if (a < min)
                min = a;
        }
        
        suma += a;
        ile++;
        
    } while (a != 0);

    if (ile > 0)
        printf("Srednia: %.2f \nSuma: %d \nMax: %d \nMin: %d \n", (float)suma / ile, suma, max, min);
    

    return 0;
}
