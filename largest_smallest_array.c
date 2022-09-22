// finding largest and smallest number in an array

#include <stdio.h>

int main()
{
    int arr[] = {32,15,46,87,49,92};
    int temp1 = arr[0];
    int temp2 = arr[0];
    for (int i=0; i<5; i++)
    {
        if (temp1 > arr[1+i])
        {
            continue;
        }
        else
        {
            temp1 = arr[1+i];
        }
    }
    for (int j=0; j<5; j++)
    {
        if (temp2 < arr[1+j])
        {
            continue;
        }
        else
        {
            temp2 = arr[1+j];
        }
    }
    printf ("greatest number in array is: %d\n", temp1);
    printf ("smallest number in array is: %d\n", temp2);
    return 0;
}
