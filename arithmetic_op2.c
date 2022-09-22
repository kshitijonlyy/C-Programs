// arithmetic operations (using 'switch')

#include <stdio.h>

int main()
{
    int a, b, op;
    printf ("enter value of a: ");
    scanf ("%d", &a);
    printf ("enter value of b: ");
    scanf ("%d", &b);
    printf ("\nenter the desired operation (1: sum, 2: difference, 3: product, 4: division): ");
    scanf ("%d", &op);
    
    switch (op)
    {
        case 1:
            printf ("\nsum of a and b is: %d", a+b);
            break;
        case 2:
            printf ("\ndifference of a and b is: %d", a-b);
            break;
        case 3:
            printf ("\nproduct of a and b is: %d", a*b);
            break;
        case 4:
            printf ("\ndivision of a and b is: %d", a/b);
            break;
        default:
            printf ("wrong input");
            break;
    }
    return 0;
}
