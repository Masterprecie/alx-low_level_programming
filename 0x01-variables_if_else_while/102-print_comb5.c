#include <stdio.h>

/**
*main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
*Return: Always 0 (Success)
*/

int main(void)
{
	int ten;
	int one;
	int a;
	int b;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (one = '0'; one <= '9'; one++)
		{
			for (a = ten; a <= '9'; a++)
			{
				for (b = one + 1; b <= '9'; b++)
				{
					putchar(ten);
					putchar(one);
					putchar(' ');
					putchar(a);
					putchar(b);
					if (!((ten == '9' && one == '8') && (a == '9' && b == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				b = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
