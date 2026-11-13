#include <stdio.h>
void quick_sort(int tab[], int lewy, int prawy)
{
    if (lewy >= prawy) 
        return;

    int i = lewy;
    int j = prawy;
    int punktodniesienia = tab[(lewy + prawy) / 2];

    while (i <= j) 
    {
        while (tab[i] < punktodniesienia) 
            i++;
        while (tab[j] > punktodniesienia) 
            j--;

        if (i <= j) 
        {
            int temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
            i++;
            j--;
        }
    }
    if (lewy < j)
        quick_sort(tab, lewy, j);
    if (i < prawy)
        quick_sort(tab, i, prawy);
}

int main()
{
    int tab[10];

    printf("Podaj 10 liczb:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &tab[i]);

    quick_sort(tab, 0, 9);

    printf("Posortowane: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", tab[i]);

    return 0;
}
