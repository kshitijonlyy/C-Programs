// if-else (nested)

#include <stdio.h>

int main()
{
    int a;
    printf ("enter value of a: ");
    scanf ("%d", &a);
    
    if (a<10)
    {
        if (a<5)
        {
            printf ("a is less than 5");
        }
        else if (a==5)
        {
            printf ("a is equal to 5");
        }
        else
        {
            printf ("a is greater than 5");
        }
    }
    else if (a==10)
    {
        printf ("a is equal to 10");
    }
    else
    {
        printf ("a is greater than 10");
    }
    return 0;
}
