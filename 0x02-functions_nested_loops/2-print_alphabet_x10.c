#include "main.h"
/**
* print_alphabet - write a function that prints the alphabet, in lowercase x10
*
*/
void print_alphabet_x10(void)
{
char c = 'a';
int i;
for (i = 0; i < 10; i++)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
