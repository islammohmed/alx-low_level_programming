#include "main.h"
/**
* _strncat - function Returns the  concatenates of two string
*@dest : first input
*@src : second input
*@n: third input
* Return: concatenates String
*/
char *_strncat(char *dest, char *src, int n)
{
int c, c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
dest[c++] = src[c2];
return (dest);
}
