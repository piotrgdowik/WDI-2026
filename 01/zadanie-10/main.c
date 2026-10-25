#include <stdio.h>

int main()
{
    int ocena;
    float suma = 0;
    int niedost = 0;

    printf("Podaj 5 ocen:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Ocena:");
        scanf("%d", &ocena);
        
        suma += ocena; 

        if (ocena == 1) 
            niedost++;
    }

    printf("Srednia ocen wynosi: %.2f\n", suma / 5);
    printf("Liczba ocen niedostatecznych: %d\n", niedost);

    return 0;
}
