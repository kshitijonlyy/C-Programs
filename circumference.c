// circumference of circle

#include <stdio.h>

int main()
{
    const float pi = 3.14;
    float radius;
    printf ("enter radius of circle: ");
    scanf ("%f", &radius);
    
    float circumference = 2*pi*radius;
    printf ("circumference of the circle is: %f", circumference);
    return 0;
}
