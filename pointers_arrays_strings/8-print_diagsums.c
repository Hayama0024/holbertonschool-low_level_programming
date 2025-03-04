#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of
 * two diagonals of a square matrix
 * @a: pointer of string
 * @size: legth of integer
 */
void print_diagsums(int *a, int size)
{
	int i, main_diag = 0, sec_diag = 0;

	for (i = 0; i < size; i++)
	{
		main_diag += a[i * size + i];
		sec_diag += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", main_diag, sec_diag);
}
