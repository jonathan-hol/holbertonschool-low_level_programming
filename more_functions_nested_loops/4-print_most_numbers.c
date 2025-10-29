#include "main.h"

/**
 * print_most_numbers - Affiche les chiffres de 0 à 9 sauf 2 et 4.
 *
 * Return: Rien.
 */
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
			_putchar(n);
	}
	_putchar('\n');
}
