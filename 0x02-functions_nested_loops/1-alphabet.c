#include "main.h"
/**
*print_alphabet - print all alphabet in lower case followed by a new line
*
*Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
