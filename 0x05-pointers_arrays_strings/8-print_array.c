#include<stdio.h>
#include "main.h"
/**
 * print_array - Prints an inputted number of elements
 *               of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0 ; num < n; num++)
	{
		printf("%d", a[num]);
		if (num != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
