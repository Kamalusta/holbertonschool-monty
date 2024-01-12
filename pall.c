#include "monty.h"

/**
 * pall - prints all stack data
 *
 * @stack: stack to store data
 * @line_number: number of the line
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	(void)line_number;

	node = *stack;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
