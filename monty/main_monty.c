#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"
#define DELIM " "


void get_func_monty(char *tokens);
void tokenize_monty(char *tokens);
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
		tokenize_monty(buffer);
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
		{NULL, NULL}
			};
	(void)opcodes;
	if (tokens == NULL)
		return;
	while (tokens[i] != '\0')
	{
		printf("%c", tokens[i]);
		len_tokens++;
		i++;
	}
}

void tokenize_monty(char *tokens)
{
	char *line_items;
	int i = 0;

	printf("start\n");
	printf("%s", tokens);
	printf("finish\n");
	line_items = strtok(tokens, " ");
	while (line_items != NULL)
	{
		printf("%s\n", line_items);
		i++;
		line_items = strtok(NULL, " ");
	}
}

void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	(void)line_number;

	if ((*stack) == NULL)
		return;
	new_node =  malloc(sizeof(stack_t));
	if (new_node == NULL)
		return;
	return;
}

void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	(void)line_number;

	if ((*stack) == NULL)
		return;
	new_node =  malloc(sizeof(stack_t));
	if (new_node == NULL)
		return;
	return;
}
