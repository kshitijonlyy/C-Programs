// sum of digits of a number

#include <stdio.h>

int main()
{
    int num, temp;
    temp = 0;
    printf ("enter any number: ");
    scanf ("%d", &num);
    
    while (num!=0)
    {
        temp += num%10;
        num /= 10;
    }
    printf ("sum of its digits: %d", temp);
    return 0;
}
