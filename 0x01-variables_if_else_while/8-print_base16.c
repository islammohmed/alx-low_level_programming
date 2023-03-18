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
int s;
for (s = '0' ; s <= '9'; s++)
{
putchar(s);
}
for (i = 'a' ; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
