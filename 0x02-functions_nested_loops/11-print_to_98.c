ii



#include "main.h"
/**
*print_to_98 -print all natural nos
*@n: integer
*Return: natural number
*/
void print_to_98(int n)
{
while (n < 98)
{
_putchar((n % 10) + '0');
n++;
}
while (n > 98)
{
  _putchar((n % 10) + '0');
n--;
}
if (n == 98)
_putchar((n % 10) + '0');
}
