#include "main.h"

/**
 * leet - capitalizes all words in a string
 * @c: string
 * Return: encode of s
 */
char *leet(char *c)
{
int *cp = c;
int i;
char key[] = {'A', 'E', 'O', 'T', 'L'};
int value[] = {4, 3, 0, 7, 1};
while (*c)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (*c == key[i] || *c == key[i] + 32)
{
*c = 48 + value[i];
}
}
c++;
}
return (cp);
}
