#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: Array of integers to be reversed
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int indes;

	for (indes = n -1; indes >= n / 2; indes--)
	{
		temp = a[n - 1 - indes];
		a[n - 1 - indes] = a[indes];
		a[indes] = temp;
	}
}
