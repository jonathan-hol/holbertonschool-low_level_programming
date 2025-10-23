#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number between -100 and 100,
 *              and prints whether the number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(NULL)); /* Initialize random number generator with current time */

    /* Generate a random number between -100 and 100 */
n = rand() % 201 - 100;

    /* Print the generated number */
printf("Le nombre généré est %d\n", n);

return (0);
}
