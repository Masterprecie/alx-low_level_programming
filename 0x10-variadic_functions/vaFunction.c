#include <stdio.h>
#include <stdarg.h>

int add(int n, ...)
{
	va_list nums;
	va_start(nums, n);

	// process

	int i, sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return sum;
}

int main(void)
{
	printf("Add1 = %d\n", add(5, 2, 1, 5, 7, 8));
	printf("Add2 = %d\n", add(3, 98, 27, 18));
	return 0;
}