#include <stdio.h>

/**
*main - Print combinations of two digit numbers
*Return: Always 0 (Success)
*/

int main(void)
{
	int hundred;
	int ten;
	int one;

	for (hundred = 0; hundred <= 9; hundred++)
	{
		for (ten = hundred + 1; ten <= 9; ten++)
		{
			for (one = ten + 1; one <= 9; one++)
			{
				putchar(hundred + '0');
				putchar(ten + '0');
				putchar(one + '0');
				if (hundred != '7' || ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
