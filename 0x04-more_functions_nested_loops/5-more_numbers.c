#include "main.h"

/**
*more_numbers - prints 10 times the numbers, from 0 to 14.
*/
void more_numbers(void)
{
	int num, count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
				_putchar(num);
		}
		_putchar('\n');
	}
}
