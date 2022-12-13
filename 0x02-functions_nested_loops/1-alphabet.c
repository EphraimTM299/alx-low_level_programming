#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * print_alphabet for printing the alphabet
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet for printing the alphabet from a to z in lowercase
 * Return: Nothing
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
