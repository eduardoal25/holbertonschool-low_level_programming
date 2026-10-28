#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Return: Nothing
 */
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
}

