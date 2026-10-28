#include <stdio.h>
/**
 * row_sum - returns the sum of a row in a multiplication table
 * @row: The row number
 * @cols: The number of columns in the multiplication table
 * Return: The sum of the row
 */
int row_sum(int row, int cols)
{
int c;
int sum = 0;

for (c = 1; c <= cols; c++)
sum += row * c;

return (sum);
}
/**
 * total_sum - returns the sum of all elements
 * @rows: The number of rows in the multiplication table
 * @cols: The number of columns in the multiplication table
 * Return: The total sum of all elements in the multiplication table
 */
int total_sum(int rows, int cols)
{
int r;
int total = 0;
int current = 0;

for (r = 1; r <= rows; r++)
{
current += row_sum(r, cols);
total += current;
}

return (current);
}

/* -- DO NOT Modify the code below this line -- */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("%d\n", total_sum(3, 3));
return (0);
}
