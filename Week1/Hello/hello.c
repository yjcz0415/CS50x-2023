#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Ask user's name
    string name = get_string("What is your name? ");
    //Output sentence
    printf("hello, %s\n", name);
}
