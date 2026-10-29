#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to print the last digit of
 *
 * Return: The last digit of n
 * print_last_digit - Prints the last digit of a number
 */
int print_last_digit(int n)
{
int last_digit = n % 10; /* Get the last digit of the number */
if (last_digit < 0)
{
last_digit = -last_digit; /* Make it positive if it's negative */
}
_putchar(last_digit + '0'); /* Print the last digit as a character */
return (last_digit); /* Return the last digit */
}
