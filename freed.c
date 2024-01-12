#include "monty.h"

/**
 * freed - free to deallocate memory when needed
 *
 * @stack: stack argument to free when needed
 */

void freed(stack_t *stack)
{
	stack_t *current;

	while (stack)
	{
		current = stack;
		stack = stack->next;
		free(current);
	}
}
