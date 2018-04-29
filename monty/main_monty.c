#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"
#define DELIM " "


void get_func_monty(char *line_items);
char *tokenize_monty(char *buffer);
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

void get_func_monty(char *line_items)
{
	int i;
	int line_number = 0;
	char *holder;

	instruction_t opcodes[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pop", op_pop},
		{"swap", op_swap},
		{NULL, NULL}
			};
	if (line_items == NULL)
		return;
	printf("----\n");
	for (i = 0 ; opcodes[i].opcode != NULL; i++)
	{
		if (opcodes[i].opcode == opcodes[0].opcode)
		{
			printf("%s\n", opcodes[0].opcode);
			printf("%s\n", opcodes[1].opcode);
			printf("%s\n", opcodes[2].opcode);
			printf("%s\n", opcodes[3].opcode);
		}
	}
	printf("----\n");
	holder = strdup(line_items);
	i = 0;
	while (holder[i] != '\0')
	{
		line_number++;
		i++;
	}
}

char *tokenize_monty(char *buffer)
{
	char *line_items;

	line_items = strtok(buffer, " ");
	while (line_items != NULL)
	{
		get_func_monty(line_items);
		line_items = strtok(NULL, " ");
	}
	return (line_items);
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

void op_pop(stack_t **stack, unsigned int line_number)
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

void op_swap(stack_t **stack, unsigned int line_number)
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
