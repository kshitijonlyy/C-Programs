// check palindrome numbers

#include <stdio.h>

int main()
{
    int num, original, rev;
    printf ("enter a number: ");
    scanf ("%d", &num);
    rev = 0;
    original = num;
    
    while (num!=0)
    {
        rev = (rev*10)+num%10;
        num = num/10;
    }
    
    if (rev==original)
    {
        printf ("this number is a palindrome");
    }
    else
    {
        printf ("this number is not a palindrome");
    }
    
    return 0;
}
