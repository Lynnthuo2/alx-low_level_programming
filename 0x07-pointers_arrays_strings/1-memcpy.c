#include "main.h"
/**
*_memcpy -  function that copies memory area.
*@dest: original memory area
*@src: memory to be copied into
*n: number of bytes
*
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int temp;

	for (temp = 0; n > 0; temp++)
	{
	  dest[temp] = src[temp];
	  n--;
  }
	return (dest);
}
