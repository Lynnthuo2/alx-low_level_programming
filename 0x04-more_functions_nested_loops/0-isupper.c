#include "main.h"

/**
*_isupper - checks if a character is uppercase or not
*@c: character to be checked
*Return: one if it is uppercase, 0 if otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
	  return (1);
	}
	else
	{
		return (0);
	}
}
