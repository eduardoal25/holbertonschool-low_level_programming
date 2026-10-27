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
alphabet = 'a'; /*reset the alphabet variable to 'a'*/
while (alphabet <= 'z')
{
alphabet = toupper(alphabet);
putchar(alphabet);
alphabet++;
}
putchar('\n');
/**
 * for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
 *{
 *alphabet = toupper(alphabet);
 *putchar(alphabet);
 *}
 */


return (0);
}
