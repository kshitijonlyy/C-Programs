// swapping two numbers (using pointers)

#include <stdio.h>

void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    printf ("enter value of num1: ");
    scanf ("%d", &num1);
    printf ("enter value of num2: ");
    scanf ("%d", &num2);
    
    printf ("\nvalue of num1 before function call: %d\n", num1);
    printf ("value of num2 before function call: %d\n", num2);
    
    swap (&num1, &num2);
    printf ("\nvalue of num1 after function call: %d\n", num1);
    printf ("value of num2 after function call: %d\n", num2);
    return 0;
}
