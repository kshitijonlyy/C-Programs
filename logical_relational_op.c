// logical/relational operators

#include <stdio.h>

int main()
{
    int a, b;
    printf ("enter value of a: ");
    scanf ("%d", &a);
    printf ("enter value of b: ");
    scanf ("%d", &b);
    
    printf ("\n'1' stands for 'True' and '0' stands for 'False'\n");
    printf ("\nis a equal to b: %d", a==b);
    printf ("\nis a not equal to b: %d", a!=b);
    printf ("\nis a greater than or equal to b: %d", a>=b);
    printf ("\nis a less than or equal to b: %d", a<=b);
    
    printf ("\n\nis a less than b and equal to 15: %d", a<b && a==15);
    printf ("\nis a less than b or greater than 10: %d", a<b || a>10);
    printf ("\nchecking not(a is equal to 15): %d", !(a==15));
    return 0;
}
