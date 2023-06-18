/*
 * Exercise 1-8. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main()
{
    char c, prevC;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || prevC != c)
        {
            putchar(c);
            prevC = c;
        }
    }
}
