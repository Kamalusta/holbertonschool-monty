#include "monty.h"

/**
 * free_stack - function to deallocate memory
 *
 * @stack: stack to storage data
 */

void free_stack(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}
