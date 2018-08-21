#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Get the card number via command line or input
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
    // Count the number of digits
    int count = 0;
    long card_num_tmp = card_num;
    while (card_num_tmp > 0) 
    {
        card_num_tmp /= 10;
        count++;
    }
    printf ("%d\n", count);

    if (count == 13 || 15 || 16) { printf ("VALID CARD\n"); }
    else { printf ("INVALID CARD\n"); }

    // Use an array of 16 integers to hold our card numbers
    int values[count];
    int i=0;
    // Adds the card number into our array values backwards
    card_num_tmp = card_num;
    for (i=0; i<count; i++)
    {
        values[i]=card_num_tmp%10;
        card_num_tmp /= 10.0;
    }
    for (i=0; i<count; i++)
    {
        printf ("%d ", values[i]);
    }
    int sum = 0;
    for (i=0; i<count; i++)
    {
        if (i%2!=0) {
            if (values[i] >= 5) {
                int tmp;
                tmp = values[i]*2;
                int tmp_1 = tmp % 10;
                int tmp_2 = tmp /= 10;
                sum += tmp_1 + tmp_2;
            } else {
                sum += values[i]*2;
            }
        } else {
            sum += values[i];
        }
        printf ("%d\n", sum);
    }
    printf ("\n%d\n", sum);
    if (sum%10==0) { printf ("VALID CARD\n"); }

    return 0;
}
