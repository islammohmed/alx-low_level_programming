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
char i, s;
for (i = 'a' ; i <= 'z'; i++)
{
putchar(i);
}
for (s = 'A' ; s <= 'Z'; s++)
{
putchar(s);
}
putchar('\n');
return (0);
}
