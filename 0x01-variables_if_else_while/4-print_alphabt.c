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
if (i != 'q' && i != 'e')
putchar(i);
}
return (0);
}
