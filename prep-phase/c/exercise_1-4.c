/*
 * Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
 * */

#include <stdio.h>

/* print Celsius-Fahrenheit table
for c = 0, 20, ..., 300 */

int main()
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    celsius = lower;

    printf("Celsius  Fahr\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%6.1f %4.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

/*
 * Output:
 * Celsius  Fahr
 *    0.0   32
 *   20.0   68
 *   40.0  104
 *   60.0  140
 *   80.0  176
 *  100.0  212
 *  120.0  248
 *  140.0  284
 *  160.0  320
 *  180.0  356
 *  200.0  392
 *  220.0  428
 *  240.0  464
 *  260.0  500
 *  280.0  536
 *  300.0  572
*/