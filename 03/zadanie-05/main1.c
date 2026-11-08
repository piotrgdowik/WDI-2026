#include <stdio.h>

int main() {

    int tab[5] = {10, 20, 30, 40, 50};
    int i;
    int size = sizeof(tab) / sizeof(tab[0]);
    
    printf("--- Od poczatku do konca ---\n");

    printf("for: ");
    for (i = 0; i < size; i++) 
        printf("%d ", tab[i]);
    printf("\n");

    printf("while: ");
    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    printf("do...while: ");
    i = 0;
    do
    {
        printf("%d ", tab[i]);
        i++;
    } while (i < size);
    printf("\n");
    
    return 0;
}
