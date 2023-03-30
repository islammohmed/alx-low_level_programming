#include "main.h"
/**
 * rot13 - cencode a string using rot13
 * @c: string
 * Return: encode of s
 */
char *rot13(char *c)
{
int *cp = c;
int i;
char key[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char value[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (*c)
{
for (i = 0; i <= 52; i++)
{
if (*c == key[i])
{
*c = value[i];
break;
}
}
c++;
}
return (cp);
}
