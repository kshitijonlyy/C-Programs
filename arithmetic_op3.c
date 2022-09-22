// arithmetic operations (using functions)

#include <stdio.h>

void sum (int a, int b)
{
    printf ("sum of a and b is: %d\n", a+b);
}

void difference (int a, int b)
{
    printf ("difference of a and b is: %d\n", a-b);
}

void product (int a, int b)
{
    printf ("product of a and b is: %d\n", a*b);
}

void division (int a, int b)
{
    printf ("division of a and b is: %d\n", a/b);
}

int main()
{
    int a, b, op;
    printf ("enter value of a: ");
    scanf ("%d", &a);
    printf ("enter value of b: ");
    scanf ("%d", &b);
    
    printf ("\nenter desired operation (1: sum, 2: differnce, 3: product, 4: division): ");
    scanf ("%d", &op);
    printf ("\n");
    
    switch (op)
    {
        case 1:
            sum(a, b);
            break;
        case 2:
            difference (a, b);
            break;
        case 3:
            product (a, b);
            break;
        case 4:
            division (a, b);
            break;
        default:
            printf ("wrong input\n");
            break;
    }
    return 0;
}
