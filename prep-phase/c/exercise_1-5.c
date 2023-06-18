/*
 * Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
 * */

#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 300, 280, ..., 0 */

int main()
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = upper;

    printf("Fahr  Celsius\n");
    while (fahr >= lower) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
}

/* 
 * Output:
 * Fahr  Celsius
 *  300  148.9
 *  280  137.8
 *  260  126.7
 *  240  115.6
 *  220  104.4
 *  200   93.3
 *  180   82.2
 *  160   71.1
 *  140   60.0
 *  120   48.9
 *  100   37.8
 *   80   26.7
 *   60   15.6
 *   40    4.4
 *   20   -6.7
 *    0  -17.8
*/