#include <stdio.h>

int main (void)
{ 
    printf (" ---- We gonna make a pyramid yo ---- \n");
    int number, i, j, k, l;

    do
    {
        printf ("Height: ");
        scanf  ("%i", &number);
    }
    while (number <= 0);

    // Prints rows.
    for (i=0; i<number; i++) 
    {
        // Prints spaces. # of spaces is height-row#
        for (j=1; j<number-i; j++)
        {
            printf (" ");
        }
        // Prints #. the number of # is the row number
        for (k=0; k<=i; k++)
        {
            printf ("#");
        }
        // Prints space between half-pyramind
        printf ("  ");
        // Now we only need to print #. Don't worry about spaces!
        for (k=0; k<=i; k++)
        {
            printf ("#");
        }
        printf ("\n");
    }
    return 0;
}