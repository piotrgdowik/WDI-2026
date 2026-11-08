#include <stdio.h>

int main() {

    int tab[5] = {10, 20, 30, 40, 50};
    int i;
    int size = sizeof(tab) / sizeof(tab[0]);
    
    printf("--- Od poczatku do konca ---\n");

    printf("for: ");
    for (i = size-1; i >= 0; i--) 
        printf("%d ", tab[i]);
    printf("\n");

    printf("while: ");
    i = size-1;
    while (i >= 0)
    {
        printf("%d ", tab[i]);
        i--;
    }
    printf("\n");

    printf("do...while: ");
    i = size-1;
    do
    {
        printf("%d ", tab[i]);
        i--;
    } while (i >= 0);
    printf("\n");
    
    return 0;
}
