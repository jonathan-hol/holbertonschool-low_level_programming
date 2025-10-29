#include "main.h"
#include <stdio.h>

/**
 * main - Vérifie le code.
 *
 * Return: Toujours 0.
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
