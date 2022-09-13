#include <ctype.h>
#include "main.h"

/**
*_isalpha - checks for uppercase character
*@c: The character to be checked.
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

