#include "monty.h"

void pint(stack_t **stack, unsigned int line_number)
{
	FILE *file = NULL;
	char *line = NULL;

	if (*stack)
		printf("%d\n", (*stack)->n);
	else {
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(file);
		free_stack(stack);
		free(line);
		exit(EXIT_FAILURE);
	}
}
		
