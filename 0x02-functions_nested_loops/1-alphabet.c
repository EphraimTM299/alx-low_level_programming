#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}


void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
