#include "main.h"
/**
*_memset - function that fills memory with a constant byte.
*@s: first address of memory
*@b: the desired value
*@n: number of bytes pointed
*
*Return: brings back pointer to the memory s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int temp = 0;

		for (; n > 0; temp++)
		{
			s[temp] = b;
	    n--;
    }
	return (s);
}
