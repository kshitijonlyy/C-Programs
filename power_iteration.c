// power of a number (using iteration)

#include <stdio.h>

void powerf (int num, int power)
{
    int temp = num;
    for (int i=1; i<power; i++)
    {
        num *= temp;
    }
    printf ("\n%d raised to power %d is: %d", temp, power, num);
}

int main()
{
    int num, power;
    printf ("enter any number: ");
    scanf ("%d", &num);
    printf ("enter the exponential power: ");
    scanf ("%d", &power);
    powerf (num, power);
    return 0;
}
