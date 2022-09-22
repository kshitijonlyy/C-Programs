// if-else (basic)

#include <stdio.h>

int main()
{
    int a;
    printf ("enter value of a: ");
    scanf ("%d", &a);
    
    if (a>10)
    {
        printf ("a is greater than 10");
    }
    else if (a==10)
    {
        printf ("a is equal to 10");
    }
    else
    {
        printf ("a is less than 10");
    }
    return 0;
}
