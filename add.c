#include "monty.h"

/**
 * add -adds the top two elements of the stack.
 *
 * @stack: stack to store data
 * @line_number: line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->next)
	{
		(*stack)->next->n += (*stack)->n;
		pop(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
