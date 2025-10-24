#include<stdio.h>

/**
 * main Entry - point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lettre;
    char lettreM;
    
    for (lettre = 'a'; lettre <= 'z'; lettre++)
    {
        putchar(lettre);
    }

    for (lettreM = 'A'; lettreM <= 'Z'; lettreM++)
    {
        putchar(lettreM);
    }

    putchar('\n');
    return (0);
}
