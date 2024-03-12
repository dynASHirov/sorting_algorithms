#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t in;

	in = 0;
	while (array && in < size)
	{
		if (in > 0)
			printf(", ");
		printf("%d", array[in]);
		++in;
	}
	printf("\n");
}