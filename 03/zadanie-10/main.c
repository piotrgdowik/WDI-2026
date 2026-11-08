#include <stdio.h>

void merge(int tab[], int lewy, int srodek, int prawy)
{
    int i = lewy;  
    int j = srodek + 1;
    int k = 0;          
    int temp[10];

    while (i <= srodek && j <= prawy) 
    {
        if (tab[i] <= tab[j]) 
            temp[k++] = tab[i++];
        else
            temp[k++] = tab[j++];
        
    }

    while (i <= srodek) 
        temp[k++] = tab[i++];

    while (j <= prawy) 
        temp[k++] = tab[j++];

    for (i = lewy, k = 0; i <= prawy; i++, k++) 
        tab[i] = temp[k];
    
}

void merge_sort(int tab[], int lewy, int prawy)
{
    if (lewy < prawy) 
    {
        int srodek = (lewy + prawy) / 2; 

        merge_sort(tab, lewy, srodek);
        merge_sort(tab, srodek + 1, prawy);
        merge(tab, lewy, srodek, prawy);
    }
}

int main() {
    int tab[10];

    printf("Podaj 10 liczb do posortowania:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    merge_sort(tab, 0, 9);

    printf("\nPosortowana tablica:\n");
    for (int i = 0; i < 10; i++) 
        printf("%d ", tab[i]);

    return 0;
}
