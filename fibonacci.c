// fibonacci series

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int c;
    
    int n;
    printf ("enter value of n: ");
    scanf ("%d", &n);
    
    printf ("%d\t %d\t", a, b);
    for (int i=2; i<n; ++i)
    {
        c = a+b;
        printf ("%d\t", c);
        a = b;
        b = c;
    }
    return 0;
}
