#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -prints the result sum of two diagonals of a square matrix
 * @a: the matrix of integers
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i, add1 = 0, add2 = 0;

	for (i = 0; i < size; i++)
	{
		add1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		add2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", add1, add2);
}
