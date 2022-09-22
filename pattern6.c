/* OUTPUT:
enter number of lines: 7
      *
     **
    ***
   ****
  *****
 ******
*******
*/

#include <stdio.h>

int main()
{
    int num;
    printf ("enter number of lines: ");
    scanf ("%d", &num);
    for (int i=num; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf (" ");
        }
        for (int k=num; k>=i; k--)
        {
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}
