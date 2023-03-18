#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main-Entry point
*
*Return:Alwys 0 (Success)
*/
int main(void)
{
char i;
for (i = 'a' ; i <= 'z'; i++)
{
putchar(i);
}
char s;
for (s = 'A' ; s <= 'Z'; s++)
{
putchar(s);
}
putchar('\n');
return (0);
}
