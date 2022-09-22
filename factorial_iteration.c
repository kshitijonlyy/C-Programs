// factorial of a number (using 'for' loop)

#include <stdio.h>

int main()
{
    int num, factorial;
    printf ("enter the number who's factorial is to be found: ");
    scanf ("%d", &num);
    factorial = 1;
    
    for (int i=num; i>=1; i--)
    {
        factorial *= i;
    }
    printf ("factorial of the number is: %d", factorial);
    return 0;
}
