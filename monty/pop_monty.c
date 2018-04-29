#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"


/**
 *
 */
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
