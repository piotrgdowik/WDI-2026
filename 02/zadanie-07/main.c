#include <stdio.h>
const unsigned granica = 20U;
int main() 
{
    unsigned suma = 0U;

    for (unsigned i = 1U; i <= granica; i++) 
        if (i % 3 == 0) 
            suma += i;
        
    printf("Suma liczb z przedzialu 1-%u dzielacych sie przez 3 wynosi: %u\n", granica, suma);

    return 0;
}
