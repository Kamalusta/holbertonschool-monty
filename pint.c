#include "monty.h"

/**
 * pint - prints last data in the stack
 *
 * @stack: stack to store data
 * @line_number: number of line
 */

void pint(stack_t **stack, unsigned int line_number)
{
  /*	FILE *file = NULL;
	char *line = NULL;
  */
  /*  FILE *code = NULL;*/
	if (*stack)
		printf("%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
