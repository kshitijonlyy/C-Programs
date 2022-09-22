// string (updating values)

#include <stdio.h>

int main()
{
    char a[] = "hello world";
    for (int i=0; i<11; i++)
    {
        if (a[i]=='o')
        {
            a[i]='a';
        }
        else if (a[i]=='l')
        {
            a[i]='i';
        }
        printf ("value of a at %d is: %c\n", i, a[i]);
    }
    return 0;
}
