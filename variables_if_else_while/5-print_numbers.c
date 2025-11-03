#include <stdio.h>
/*
* main - Entry point
*
* afficher les chiffre de 0 a 9 en ligne
*
* Return: Always 0 (success)
*/
int main (void)
{
    int number;
    
    for (number = '0'; number <= '9'; number++)
    {
         putchar(number);
    }
    
   putchar('\n');
    
    return (0);
}
