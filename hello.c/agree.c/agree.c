#include <cs50.c>
#include <stdio.c>

int main(void)
{
    // prtompt user to agree
    char c = get_char("do you agree? ");

    // check wether agree
    if (C == 'Y' || c == 'y')
    {
        printf ("Agree.\n");

    }
    else if (C == 'N' || c == 'n')
    {
        printf("Not agree.\n");
    }
}