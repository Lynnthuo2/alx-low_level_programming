#include "main.h"
/**
*_strchr - function that locates a character in a string.
*@s:input
*@c:input
*
*Return:s otherwise 0 if character not found
*/
char *_strchr(char *s, char c)
{
	int b = 0;

	for  (; s[b] >= '\0'; b++)
	{if (s[b] == c)
	  return (&s[b]);
  }
	return (0);
}
