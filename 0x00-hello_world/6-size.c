#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int b
	long long int d;
	char c;
	float f;

	printf("Size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long long int is: %lu.\n", (unsigned long)sizeof(d));
	printf("Size of an char is: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of a long int is: %lu.\n", (unsigned long)sizeof(b));
	printf("Size of a float is: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}
