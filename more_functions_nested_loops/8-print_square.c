#include "main.h"

/**
 * print_square - Affiche un carré avec le caractère #.
 * @size: La taille du carré.
 *
 * Return: Rien.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
