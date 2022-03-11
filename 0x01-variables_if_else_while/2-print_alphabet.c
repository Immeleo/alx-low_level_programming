#include <stdio.h>
/**
*main -programme to print alphabet in lowercase followed by
*      new line using putchar
*
*Return: always 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
