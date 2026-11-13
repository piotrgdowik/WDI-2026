#include <stdio.h>
void lcalk(char t[])
{
    int liczba=0;
    for (int i = 0; t[i] != '\0'&&t[i] != '\n'; i++) 
    {
        char znak = t[i];
        if (znak >= 48 && znak <= 57)
            liczba=liczba*10+t[i]-48;
        else
        {
            printf("Nie jst to liczba calk");
            return;  
        }
    }
    printf("Podano liczbe calk: %d",liczba);
}
int main()
{
    char t1[50];

    printf("Podaj dane: ");
    fgets(t1, sizeof(t1), stdin);
    
    lcalk(t1);
    return 0;
}
