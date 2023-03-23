#include "main.h"

/**
 * print_most_numbers -  a function that print number from 0 to 9 expt 2 and 4
 * Return: the numbers
 */
void  print_most_numbers(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
continue;
else
printf("%d", i);
}
printf("\n");
}
