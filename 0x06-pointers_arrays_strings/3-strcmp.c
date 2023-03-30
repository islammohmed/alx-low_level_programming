#include "main.h"
/**
* _strcmp - function compare two string
*@s1 : first input
*@s2 : second input
* Return: copyed String
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0;
while (s1[i])
i++;
while (s2[j])
j++;
if (i > j)
return (15);
else if (j > i)
return (-15);
else
return (0);
}
