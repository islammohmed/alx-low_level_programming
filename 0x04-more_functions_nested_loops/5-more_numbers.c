#include "main.h"

/**
 * more_numbers -  a function that print number from 0 to 9 expt 2 and 4
 * Return: the numbers
 */
void more_numbers(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
{
int j;
for (j = 0; j < 15; j++)
{
printf("%d", j);
}
printf("\n");
}
}
