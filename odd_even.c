// checking odd and even numbers

#include <stdio.h>

void check (int a)
{
    if (a%2 == 0)
    {
        printf ("%d is an even numbber", a);
    }
    else
    {
        printf ("%d is an odd number", a);
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
