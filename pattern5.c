/* OUTPUT:
1
22
333
4444
333
22
1
*/

#include <stdio.h>

int main()
{
    for (int i=1; i<=4; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf ("%d", i);
        }
        printf ("\n");
    }
    
    for (int i=3; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf ("%d", i);
        }
        printf ("\n");
    }
    return 0;
}
