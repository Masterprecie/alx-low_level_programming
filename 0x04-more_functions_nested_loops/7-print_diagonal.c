#include "main.h"

/**
* print_line - Write a function that draws a straight line in the terminal.
* @n: Integer amount of _
*/
void print_diagonal(int n)
{
	int i, j;
	
	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
