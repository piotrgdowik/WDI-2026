#include <stdio.h>

#define ROZMIAR 5 

// 1. STOS (LIFO - Last In, First Out)
int stos[ROZMIAR];
int wierzch = -1; 

void push(int wartosc) 
{
    if (wierzch == ROZMIAR - 1) 
        printf("Stos jest pelny\n");
    else
    {
        wierzch++;
        stos[wierzch] = wartosc;
        printf("Dodano: %d\n", wartosc);
    }
}
void pop() {
    if (wierzch == -1)
        printf("Stos jest pusty\n");
    else
    {
        printf("Usunięto: %d\n", stos[wierzch]);
        wierzch--;
    }
}

// 2. KOLEJKA (FIFO - First In, First Out)
int kolejka[ROZMIAR];
int ileElementow = 0; 

void enqueue(int wartosc) 
{
    if (ileElementow == ROZMIAR)
        printf("Kolejka jest pelna\n");
    else
    {
        kolejka[ileElementow] = wartosc;
        ileElementow++;
        printf("Dodano: %d\n", wartosc);
    }
}
void dequeue() 
{
    if (ileElementow == 0)
        printf("Kolejka jest pusta\n");
    else 
    {
        printf("Usunięto: %d\n", kolejka[0]);
        for (int i = 0; i < ileElementow - 1; i++) 
            kolejka[i] = kolejka[i + 1];
        
        ileElementow--;
    }
}

int main() {
    printf("--- TEST STOSU (LIFO) ---\n");
    push(10);
    push(20);
    push(30);
    pop(); // Usunie 30
    pop(); // Usunie 20

    printf("\n--- TEST KOLEJKI (FIFO) ---\n");
    enqueue(100);
    enqueue(200);
    enqueue(300);
    dequeue(); // Usunie 100
    dequeue(); // Usunie 200

    return 0;
}
