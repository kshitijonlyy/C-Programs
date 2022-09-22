// eligibility for voting (using 'if-else')

#include <stdio.h>

int main()
{
    int age;
    printf ("enter age of the candidate: ");
    scanf ("%d", &age);
    
    if (age>=18)
    {
        printf ("you are eligible to vote");
    }
    else
    {
        printf ("you are not eligible to vote");
    }
    return 0;
}
