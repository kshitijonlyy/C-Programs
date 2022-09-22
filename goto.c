// using goto statement

#include <stdio.h>

int main()
{
    int a, b, c;
    
    Addition:
    {
        printf ("Sum: %d\n", a+b);
    }
    Subtraction:
    {
        printf ("Difference: %d\n", a-b);
    }
    Product:
    {
        printf ("Product: %d\n", a*b);
    }
    Division:
    {
        printf ("Division: %d\n", a/b);
    }
    Remainder:
    {
        printf ("Remainder: %d\n", a%b);
    }
    
    printf ("enter a: ");
    scanf ("%d", &a);
    printf ("enter b: ");
    scanf ("%d", &b);
    printf ("enter desired operation (1, 2, 3, 4, 5): ");
    scanf ("%d", &c);
    
    if (c==1)
    {
        goto Addition;
    }
    else if (c==2)
    {
        goto Subtraction;
    }
    else if (c==3)
    {
        goto Product;
    }
    else if (c==4)
    {
        goto Division;
    }
    else if (c==5)
    {
        goto Remainder;
    }
    else
    {
        printf ("\nWrong Input");
    }
    return 0;
}
