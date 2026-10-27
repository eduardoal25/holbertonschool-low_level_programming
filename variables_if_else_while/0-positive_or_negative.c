#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{ /* if the number is greater then zero */
printf("is positive\n"); /* then it prints is positve */
}
else if (n == 0)
{ /*I f the number is equal to 0 */
printf("is zero\n"); /* It prints Zero */
}
else
{ /* It it is less than 0 */
printf("is negative\n"); /* prints is negative */
}
return (0);
}
