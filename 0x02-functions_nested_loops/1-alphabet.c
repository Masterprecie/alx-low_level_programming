#include "main.h"

/**
*print_alphabet - prints alphabet
*Return: always 0;
*/

void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
