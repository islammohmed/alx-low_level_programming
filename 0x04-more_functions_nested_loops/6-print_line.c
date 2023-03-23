#include "main.h"

/**
 * print_line -  a function that print - number of time
 * @n: input
 * Return: the - numbers
 */
void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n; i++)
{
printf("_");
}
}
printf("\n");
}
