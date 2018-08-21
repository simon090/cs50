#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long card_num;
    if (argc == 2)
    {
        card_num = atol(argv[1]);
    }
    else
    {
        printf("Enter card number: ");
        scanf("%ld", &card_num);
    }
    printf("%ld\n", card_num);

    // Use an array of 16 integers to hold our card numbers
    int values[16];
    int i=0;
    // Adds the card number into our array values backwards
    while (card_num>10)
    {
        printf ("%ld ", card_num);
        values[i]=card_num%10;
        card_num /= 10;
        i++;
    }
    for (i=0; i<16; i++)
    {
        printf ("%d ", values[i]);
    }
    return 0;
}
