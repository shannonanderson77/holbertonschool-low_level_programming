#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"
#define DELIM " \t\r\n\a"


void get_func_monty(char *tokens);
/**
 *
 */
int main(int argc, char **argv)
{
	FILE *fd;
	size_t buffer_size = 1000;
	char *buffer;
	char *tokens = NULL;
	int line_number = 1;

	buffer = malloc(sizeof(char) * 1000);
	if (buffer == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (argc != 2)
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
	while (getline(&buffer, &buffer_size, fd) != -1)
	{
		tokens = strtok(buffer, DELIM);
		while (tokens != NULL)
		{
			get_func_monty(tokens);
			tokens = strtok(NULL, DELIM);
		}
		line_number++;
	}
	free(tokens);
	free(buffer);
	fclose(fd);
	return (0);
}

void get_func_monty(char *tokens)
{
	int i = 0;
	int len_tokens = 0;

	instruction_t opcodes[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{NULL, NULL}
			};

	if (tokens == NULL)
		return;
	while (tokens[i] != '\0')
	{
		len_tokens++;
		i++;
	}
	printf("%s", opcodes.command);
}

void (*op_push)(void)
{
	return;
}

void (*op_pall)(void)
{
	return;
}

void (*op_pop)(void)
{
	return;
}

void (*op_swap)(void)
{
	return;
}

void (*op_add)(void)
{
	return;
}

void (*op_nop)(void)
{
	return;
}
