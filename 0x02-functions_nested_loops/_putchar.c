#include <main.h>
#include <unistd.h>

/**
*_putchar - writes the character to c to stdout
*@c: the character to print
*
*Return: 1 (success)
*On error, -1 is returned, and error is set appropriately
*/
int  _putchar(char c)
{
	return (write(1, &c, 1));
}
