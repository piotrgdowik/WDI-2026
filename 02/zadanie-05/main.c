#include <stdio.h>

int main() 
{
    char wybor;

    printf("Wybierz klase spoleczna:\n");
    printf("  [P]oddany\n");
    printf("  [G]iermek\n");
    printf("  [R]ycerz\n");
    printf("  [M]ag\n");
    printf("  [K]rolowa\n");
    printf("Twoj wybor: ");
    scanf(" %c", &wybor);

    printf("\nUprawnienia: ");

    switch (wybor) 
    {
        case 'K':
        case 'k':
            printf("rozkazywac Królowi, ");
        case 'M':
        case 'm':
            printf("rozmawiac z Królem, ");
        case 'R':
        case 'r':
            printf("wchodzic do zamku codziennie oraz rekrutowac giermkow, ");
        case 'G':
        case 'g':
            printf("wchodzic na dziedziniec zamkowy codziennie, ");
        case 'P':
        case 'p':
            printf("czcic Króla\n");
            break;
        default:
            printf("Nieznana klasa społeczna\n");
            break;
    }

    return 0;
}
