#include "main.h"
/**
* print_alphabet_x10 - write a function that prints the alphabet,
*                      in lowercase 10 times
*
*/
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
