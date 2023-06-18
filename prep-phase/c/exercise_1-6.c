/*
 * Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

int main()
{
    printf("Enter a key\n");
    printf("%d", getchar() != EOF);
}

/*
 * Output:
 * 0 if EOF is entered
 * 1 if any other key is entered
*/
