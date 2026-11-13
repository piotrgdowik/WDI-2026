#include <stdio.h>
void anagram(char t1[],char t2[])
{
    int l1[26] = {0};
    int l2[26] = {0};

    for (int i = 0; t1[i] != '\0'; i++) 
    {
        char znak = t1[i];
        if (znak >= 65 && znak <= 90)
            znak = znak + 32;
        if (znak >= 97 && znak <= 122)
            l1[znak - 97]++;
    }
    for (int i = 0; t2[i] != '\0'; i++) 
    {
        char znak = t2[i];
        if (znak >= 65 && znak <= 90)
            znak = znak + 32;
        if (znak >= 97 && znak <= 122)
            l2[znak - 97]++;
    }
    for(int j=0;j<26;j++)
        if(l1[j]!=l2[j])
            {
                printf("Nie sa anagramami");
                return;
            }
    printf("Sa anagramami");
}
int main()
{
    char t1[50];
    char t2[50];
 
    printf("Podaj 1. wyraz: ");
    fgets(t1, sizeof(t1), stdin);
    printf("Podaj 2. wyraz: ");
    fgets(t2, sizeof(t2), stdin);

    anagram(t1,t2);
    return 0;
}
