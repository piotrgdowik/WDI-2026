#include <stdio.h>

int main() 
{
    int mies;

    printf("Podaj numer miesiaca:\n");
    printf("Twoj wybor: ");
    scanf(" %d", &mies);

    printf("\nKwartal: ");

    switch (mies) 
    {
        case 1:
        case 2:
        case 3:
            printf("Pierwszy kwartal");
            break;
        case 4:
        case 5:
        case 6:
            printf("Drugi kwartal");
            break;
        case 7:
        case 8:
        case 9:
            printf("Trzeci kwartal");
            break;
        case 10:
        case 11:
        case 12:
            printf("Czwarty kwartal");
            break;
        default:
            printf("Nie ma takiego miesiaca\n");
            break;
    }
    return 0;
}
