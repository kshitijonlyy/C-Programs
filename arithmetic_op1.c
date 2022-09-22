// arithmetic operators

#include <stdio.h>

int main()
{
    int a, b;
    printf ("enter value of integer a: ");
    scanf ("%d", &a);
    printf ("enter value of integer b: ");
    scanf ("%d", &b);
    
    int c = a+b;
    int d = a-b;
    int e = a*b;
    int f = a/b;
    int g = a%b;
    
    printf ("\nsum of a and b is: %d", c);
    printf ("\ndifference of a and b is: %d", d);
    printf ("\nproduct of a and b is: %d", e);
    printf ("\ndivision of a and b is: %d", f);
    printf ("\nremainder of a and b is: %d", g);
    return 0;
}
