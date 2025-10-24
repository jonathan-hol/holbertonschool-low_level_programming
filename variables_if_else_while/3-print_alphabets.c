#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre;
	char lettreM;

	/* Afficher les lettres minuscules */
	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		putchar(lettre);
	}

	/* Afficher les lettres majuscules */
	for (lettreM = 'A'; lettreM <= 'Z'; lettreM++)
	{
		putchar(lettreM);
	}

	putchar('\n'); /* Ajouter un saut de ligne après l'affichage */
	return (0);    /* Retourner 0 pour indiquer une exécution réussie */
}
