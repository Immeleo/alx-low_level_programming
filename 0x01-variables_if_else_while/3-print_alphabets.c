#include <stdio.h>
/*programme to print alphabet in lower and upper case followed by new line*/
int main(void)
{
int ch;
clrscr();
/*print lowercase alphabets*/
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A';  ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
