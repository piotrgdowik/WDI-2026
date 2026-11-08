#include <stdio.h>
int ceiling(float x)
{
    int c = (int)x;
    
    if (x > 0 && x != c)
        return c + 1;
        
    return c;
}
int floorv(float x)
{
    int f = (int)x;
    
    if (x < 0 && x != f) 
        return f - 1;
    
    return f;
}
int roundv(float x)
{
    if (x >= 0) 
        return (int)(x + 0.5);
    else 
        return (int)(x - 0.5);
}

int main() 
{
    float a;
    printf("Podaj liczbe:");
    scanf("%f", &a);
    
    printf("Liczba: %.2f | Ceiling: %d | Floor: %d | Round: %d\n", a, ceiling(a), floorv(a), roundv(a));
    
    
    return 0;
}
