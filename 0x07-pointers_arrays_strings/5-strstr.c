#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *s = needle;

		while (*j == *s && *s != '\0')
		{
			j++;
			s++;
		}

		if (*s == '\0')
			return (haystack);
	}
	return (0);
}
