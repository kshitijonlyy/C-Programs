// counting digits of a number

#include <stdio.h>

int main()
{
    int num, count;
    printf ("enter any number: ");
    scanf ("%d", &num);
    count = 0;
    
    while (num>0)
    {
        count += 1;
        num /= 10;
    }
    
    printf ("this number has %d digits", count);
    return 0;
}
