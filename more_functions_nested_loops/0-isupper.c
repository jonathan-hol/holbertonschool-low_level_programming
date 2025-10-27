#include "main.h"
#include <stdio.h>
/*
* main - check the code.
*
* Return: Always 0
*/
/* declarer la function _isupper ici pour quelle soit connu du compilateur*/
int _isupper(int c)
{
    if (c >= 'A' && c < 'Z') {
        return 1; /*c'est une majuscule*/
    }
    return 0; /* c'est une minuscule*/
}
/*fonction pour tester _isupper*/
int main(void)
{
    char c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    
    c ='a';
    printf("%c: %d\n", c, _isupper(c));

return (0);
}