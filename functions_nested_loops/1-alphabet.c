#include "main.h"
/**
* print_alphabet - Prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
/* betty style doc for function print_alphabet goes there */
int print_alphabet(void)
{
char alphabet = 'a'; /*variable to store the alphabet*/
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
return (0);
}
