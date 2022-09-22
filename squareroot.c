// square root of a number

#include <stdio.h>
#include <math.h>

void root (int num)
{
    float root = sqrt (num);
    printf ("square root of %d is %f", num, root);
}

int main()
{
    int num;
    printf ("enter any number: ");
    scanf ("%d", &num);
    root (num);
    return 0;
}
