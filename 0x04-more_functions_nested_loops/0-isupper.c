#include "main.h"
/**
*_isupper -  function that checks for uppercase character.
*@c: The character to check
*
*Return: on success 1
*On error: -1 is returned and error is set appropriately
*/

int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
    {
      return (1);
    }
else
  return (0);
}
