#include "main.h"

/**
 * print_diagonal -  a function that print number from 0 to 9 expt 2 and 4
 *@n:input
 * Return: the numbers
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n; i++)
{
int j;
for (j = 0; j < i; j++)
{
_putchar(" ");
}
_putchar("\\");
_putchar("\n");
}
}
printf("\n");
}
