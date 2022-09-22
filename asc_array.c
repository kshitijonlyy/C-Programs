// array in ascending order

#include <stdio.h>

int main()
{
    int arr[7] = {15,38,76,39,81,2,64};
    int temp;
    for (int i=0; i<=6; i++)
    {
        for (int j=1+i; j<=6; j++)
        {
            if (arr[i] < arr[j])
            {
                continue;
            }
            else
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf ("ascending order: ");
    for (int k=0; k<=6; k++)
    {
        printf ("%d\t", arr[k]);
    }
    return 0;
}
