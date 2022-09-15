#include "main.h"

/**
* print_numbers - Prints the numbers from 0-9.
*/
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 10; num++)
		_putchar("%d", num);
	_putchar('\n');
	return (0);
}
