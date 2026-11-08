#include <stdio.h>
void bubble_sort(int tab[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
        for (j = 0; j < n - i - 1; j++)
            if (tab[j] > tab[j + 1]) 
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
}
int main()
{
    int tab[10];
    int n = 10;

    printf("Podaj 10 liczb do posortowania:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    bubble_sort(tab, n);

    printf("\nTablica po posortowaniu rosnąco:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", tab[i]);

    return 0;
}
