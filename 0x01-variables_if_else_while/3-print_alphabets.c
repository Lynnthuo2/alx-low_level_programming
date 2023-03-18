#include <stdio>

/**
 * main - Prits the alphabet.
 *
 * Return: Always 0 (Success)
 */
{
char alp[52] = "abcdefghijklmnopqrstuvwxyz";
	int i

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
