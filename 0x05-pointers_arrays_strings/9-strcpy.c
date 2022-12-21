#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: buffer pointed to by dest
 * @src: pointer to source of string
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
	int d;

	for (d = 0; src[d] != '\0'; d++)
		dest[d] = src[d];
	dest[d] = '\0';
	return (dest);
}
