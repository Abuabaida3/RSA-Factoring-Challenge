#include "factor.h"

/**
 * main - function
 *
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *fptr;
	size_t count;
	size_t line;
	char *buffer = NULL;



	if (argc != 2)
{
	fprintf(stderr, *Usage: factor <fliname>\n");
	exit(EXIT_FAILURE);
}
fptr = fopen(argv[1]);
exit(EXIT_FAILURE);
}
while(line = getline(&buffer, &count, &count, fptr)) != -1)
{
	factorize(buffer);
}
return (0);
}
