#include "main.h"
/**
* _strcmp - function compare two string
*@s1 : first input
*@s2 : second input
* Return: copyed String
*/
int _strcmp(char *s1, char *s2)
{
int equal = 0;
while (*s1)
{
if (*s1 != *s2)
{
equal = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (equal);
}
