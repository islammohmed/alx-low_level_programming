#include "main.h"
/**
* _strncpy - function Returns the  copyed string to another
*@dest : first input
*@src : second input
*@n: third input
* Return: copyed String
*/
char *_strncpy(char *dest, char *src, int n)
{
int c, c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0; c2 < n ; c2++)
dest[c2] = src[c2];
return (dest);
}
