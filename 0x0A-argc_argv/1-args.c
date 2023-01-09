#include <stdio.h>
#include <stdlib.h>

/*
 *
 *
 *
 *
 * */

int main (int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		*argv[i] = *argv[i];
	}
	printf("%d\n", (i - 1));
	return 0;
}
