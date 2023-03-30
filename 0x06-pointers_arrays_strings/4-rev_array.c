#include "main.h"
/**
* reverse_array - function reverse content
*@a: first input
*@n: second input
* Return: reversed content
*/
void reverse_array(int *a, int n)
{
int i, j, t;
int b[n];
for (i = 0, j = (n - 1); i < j; i++, j--)
{
t = a[i];
a[i] = a[j];
a[j] = t;
}
}
