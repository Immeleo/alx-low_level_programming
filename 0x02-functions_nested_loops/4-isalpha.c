#include "main.h"
/**
* _isalpha - write a function that checks for lowercase or uppercase character.
* @c: The character to check
*
* Return: 1 if the character is lowercase. 0 otherwise
*/
int _ialpha(int c)
{
if (c < 'z' && c > 'a' || c < 'Z' && c > 'A')
return (1);
else
return (0);
}
