#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the lenth of a string
 * @s: char to check for the string
 * Returns 0
 **/

int _strlen(char *s)
{
	int b = 0;

	for (; *s++;)
		b++;
	return (b);
}
