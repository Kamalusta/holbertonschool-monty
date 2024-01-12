#include "monty.h"

void pop(stack_t **stack, unsigned int line_number)
{
	FILE *file = NULL;
	char *line = NULL;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(file);
		free_stack(stack);
		free(line);
		exit(EXIT_FAILURE);
	}
	stack_t *temp = *stack;
	*stack = temp->next;
	free(temp);
}
