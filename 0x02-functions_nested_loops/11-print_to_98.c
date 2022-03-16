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
while(n != 98)
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
n++;
}
while (n > 98)
{
while(n != 98)
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
n--;
}
if (n == 98)
_putchar((n % 10) + '0');
}
