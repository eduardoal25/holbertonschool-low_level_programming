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
char alphabet = 'a'; /*variable to store the alphabet*/
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
    alphabet = toupper(alphabet);
    putchar(alphabet);
}
return (0);
}
