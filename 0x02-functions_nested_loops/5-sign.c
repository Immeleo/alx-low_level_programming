#include "main.h"
/**
*print_sign - function to print sign of a number
*@int: integer
*
*Return: sign of number
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return(1);
}
else if(n < 0)
{
_putchar('-');
return(-1);
}
else{
_putchar('0');
}
}
