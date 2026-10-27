#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
char alphabet; /*variable to store the alphabet*/
putchar(alphabet = 'a'); /*prints the alphabet*/
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
return (0);
}
