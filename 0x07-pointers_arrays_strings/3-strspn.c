#include "main.h"
/**
*_strspn -  gets the length of a prefix substring
* @s: char pointer
* @accept: char pointer*
*
* Return: s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int c = 0; int i = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[c] != '\0')
		{
			if (s[i] == accept[c])
				b++;
			c++;
		}
		i++;
		c = 0;
	}
	return (b);
}
