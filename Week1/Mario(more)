#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    do
    {
        height = get_int("Height? ");
    }
    while (height <= 0 || 8 < height);
    for (int i = 0; i < height; i++)
    {
        //left space
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        //left bricks
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        //intervals
        printf("  ");
        //right bricks
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
