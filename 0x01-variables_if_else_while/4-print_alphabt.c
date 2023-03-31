#include <stdio.h>

/**
 * main - print aal letters except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int c;

	c = 97
		while (c <= 122)
		{
	    if (c != 101 && c != 113)
		  {
	    putchar(c);
	    }
	    c++
		}
	putchar('\n')
	return (0);
}
