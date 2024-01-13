#include "monty.h"

/**
 * pop - The opcode pop
 *
 * @stack: stack to store data
 * @line_number: number of line
 */

void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_t *temp = *stack;
	*stack = temp->next;
	free(temp);
}
