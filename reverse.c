// reverse of a number

#include <stdio.h>

int main()
{
    int num, rev;
    printf ("enter a number: ");
    scanf ("%d", &num);
    rev = 0;
    
    while (num!=0)
    {
        rev = (rev*10)+num%10;
        num = num/10;
    }
    
    printf ("reverse of this number is: %d", rev);
    
    return 0;
}
