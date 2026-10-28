#include "main.h"
/**
* print_alphabet - Prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
/* betty style doc for function print_alphabet_x10 goes there */
void print_alphabet_x10(void)
{
int i = 0; /*variable to count the number of times the alphabet is printed*/
while (i < 10)
{
char alphabet = 'a'; /*variable to store the alphabet*/
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
i++;
}
_putchar('\n');
return (0);
}

