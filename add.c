#include "monty.h"

void add(stack_t **stack, unsigned int line_number)
{
	FILE *file = NULL;
	char *line = NULL;

	if (*stack && (*stack)->next) 
	{
		(*stack)->next->n += (*stack)->n;
		pop(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(file);
		free_stack(stack);
		free(line);
		exit(EXIT_FAILURE);
	}
}
