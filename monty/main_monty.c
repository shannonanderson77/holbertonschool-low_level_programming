#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>
#include "monty.h"

/**
 *
 */
int main(int argc, char **argv)
{
	char buffer[1000];
	FILE *fd;

	if(argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, 1000, fd) != NULL);
	{
		printf("%s", buffer);
	}
	fclose(fd);
	return (0);
}
