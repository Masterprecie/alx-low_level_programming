#include <stdio.h>

/**
*main - Print the alphabet in lowercase letters, except for e and q
*Return: Always 0 (Success)
*/

int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
