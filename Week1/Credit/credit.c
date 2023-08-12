#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long numbers;
    do
    {
        numbers = get_long("Number: ");
    }
    while (numbers < 0);

    int last_get_odd_digit;
    int last_get_even_digit;
    int digit_get;

    int sum_even = 0;
    int sum_odd = 0;
    int digits_size = 0;
    int checknum = 0;

    // Get each digits
    do
    {
        digit_get = numbers % 10;
        digits_size += 1;
        // Get odd digit
        if (digits_size % 2 == 1)
        {
            sum_odd += digit_get;
            last_get_odd_digit = digit_get;
        }
        // Get even digit (0~4)
        else if (digit_get < 5)
        {
            sum_even += digit_get * 2;
            last_get_even_digit = digit_get;
        }
        // Get even digit (5~9)
        else
        {
            sum_even += (digit_get - 5) * 2 + 1;
            last_get_even_digit = digit_get;
        }
        numbers = numbers / 10;
    }
    while (numbers > 0);

    checknum = sum_even + sum_odd;

    // Caclulate the first two digits
    int beginning = 0;
    if (digits_size % 2 == 0)
    {
        beginning = last_get_even_digit * 10 + last_get_odd_digit;
    }
    else
    {
        beginning = last_get_odd_digit * 10 + last_get_even_digit;
    }

    // Print results
    if (checknum % 10 != 0)
    {
        printf("INVALID\n");
    }
    // AMEX
    else if ((digits_size == 15) && ((beginning == 34) || (beginning == 37)))
    {
        printf("AMEX\n");
    }
    // MASTERCARD
    else if ((digits_size == 16) && ((beginning == 51) || (beginning == 52) || (beginning == 53) || (beginning == 54)
                                     || (beginning == 55)))
    {
        printf("MASTERCARD\n");
    }
    // VISA
    else if ((digits_size == 13 || digits_size == 16) && (beginning / 10 == 4))
    {
        printf("VISA\n");
    }
    // None of them
    else
    {
        printf("INVALID\n");
    }
}
