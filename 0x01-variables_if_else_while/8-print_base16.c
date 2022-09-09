#include <stdio.h>

/**
*main - prints hexadecimal base 0123456789abcdef, using putchar
*Return: Always 0 (Success)
*/

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (digit = 'a' ; digit <= 'f'; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
