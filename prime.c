// prime numbers

#include <stdio.h>

void check (int a)
{
    int divisible = 0;
    for (int i=1; i<=a; i++)
    {
        if (a%i == 0)
        {
            divisible ++;
        }
    }
    if (divisible == 2)
    {
        printf ("%d is a prime number", a);
    }
    else
    {
        printf ("%d is not a prime number", a);
    }
}

int main()
{
    int num;
    printf ("enter any number: ");
    scanf ("%d", &num);
    check (num);
    return 0;
}
