// bitwise operators

#include <stdio.h>

int main()
{
    int a, b;
    printf ("enter value of a: ");
    scanf ("%d", &a);
    printf ("enter value of b: ");
    scanf ("%d", &b);
    
    printf ("\nbitwise and of a and b: %d\n", a&b);
    printf ("bitwise or of a and b: %d\n", a|b);
    printf ("bitwise xor of a and b: %d\n", a^b);
    printf ("bitwise complement of b: %d\n", ~b);
    printf ("bitwise shift left of b: %d\n", b<<1);
    printf ("bitwise shift right of b: %d\n", b>>1);
    return 0;
}
