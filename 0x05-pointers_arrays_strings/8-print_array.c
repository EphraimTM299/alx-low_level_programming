#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integer
 * @a: int for the pointer
 * @n: int number of elements of the array to be printed
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
printf("\n");
}
