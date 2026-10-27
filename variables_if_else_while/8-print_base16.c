#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
int num = 0;
char letters = 'a';
while (num <= 9)
{
putchar(num + '0');
num++;
}
while (letters <= 'f')
{
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
