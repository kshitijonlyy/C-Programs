// string (basic)

#include <stdio.h>

int main()
{
    char a[] = "hello world";
    for (int i=0; i<11; i++)
    {
        printf ("value of a at %d is: %c\n", i, a[i]);
    }
    return 0;
}
