// square of a number

#include <stdio.h>
#include <math.h>

void square (int num)
{
    int square = pow (num, 2);
    printf ("square of %d is %d", num, square);
}

int main()
{
    int num;
    printf ("enter any number: ");
    scanf ("%d", &num);
    square (num);
    return 0;
}
