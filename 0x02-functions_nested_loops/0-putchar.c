#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* Return:1
*/
int main(void)
{
char text_printed[8] = "_putchar";
int count;
for (count = 0; count < 8; count++)
{
_putchar(text_printed[count]);
}
_putchar('\n');
return (0);
}
