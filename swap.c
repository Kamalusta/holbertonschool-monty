#include "monty.h"

void swap(stack_t **stack, unsigned int line_number)
{
	FILE *file = NULL;
	char *line = NULL;

	if (*stack && (*stack)->next)
	{
		int temp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
	else 
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(file);
		free_stack(stack);
		free(line);
		exit(EXIT_FAILURE);
	}
}
