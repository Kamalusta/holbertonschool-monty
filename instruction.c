#include "monty.h"

/**
 * instruction - give the count arguments
 *
 * @stack: stack to storage data
 * @cmdline: string line
 * @n: number argument
 *
 * Return: void
 */

void instruction(stack_t **stack, char *cmdline, int n)
{
  char *token;
  instruction_t cmds[] = {{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop}, {"swap", swap}, {"add", add}, {"nop", nop}, {NULL, NULL}};
  int i = 0;
  if (!cmdline)
      return;
  token = strtok(cmdline, " \t\n");
  if (!token || (token && token[0] == '#'))
    return;
  while (cmds[i].opcode)
    {
		if (strcmp(cmds[i].opcode, token) == 0)
		{
			token = strtok(NULL, " \t\n");
			if (i == 1)
			{
				cmds[i].f(stack, n);
				break;
			}
			if (!atoi(token) && strcmp(token, "0") != 0)
			{
				fprintf(stderr, "L%d: usage: push integer\n", n);
				freed(*stack);
				exit(EXIT_FAILURE);
			}
			cmds[i].f(stack, atoi(token));
			break;
		}
		i++;
	}
	if (!cmds[i].opcode)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", n, token);
		freed(*stack);
		exit(EXIT_FAILURE);
	}
}
