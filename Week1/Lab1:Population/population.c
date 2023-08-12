#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size = 0;
    do
    {
        start_size = get_int("Input an integer (>=9) for a starting population size: ");
    }
    while (start_size < 9);


    // TODO: Prompt for end size
    int end_size = 0;
    do
    {
        end_size = get_int("Input an integer (>=start size) for a ending population size: ");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    // start_size + n_years * int(start_size / 3) - n_years * int(start_size / 4) >= end_size
    int n_years = 0;

    while (start_size < end_size)
    {
        start_size = start_size + (start_size / 3) - (start_size / 4);
        n_years += 1;
    }
    // TODO: Print number of years
    printf("Years: %i\n", n_years);
}
