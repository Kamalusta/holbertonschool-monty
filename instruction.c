#include "monty.h"

/**
 * instruction - give the count arguments
 * @cmdline: string line
 * 
 * Return: Always 0.
 */
void instruction(stack_t **stack, char *cmdline, int n)
{
  char *token;
  instruction_t cmds[] = {{"push", push}, {"pall", pall}, {NULL, NULL}};
  int i = 0;
  
  token = strtok(cmdline, " \t\n");
  while (cmds[i].opcode)
    {
      if (strcmp(cmds[i].opcode, token) == 0)
	{
	  token = strtok(NULL, " \t\n");
	  if (!token)
	    {
	      cmds[i].f(stack, n);
	      break;
	    }
	  if (!atoi(token))
	    {
	      fprintf(stderr, "L%d: usage: push integer", n);
	      exit(EXIT_FAILURE);
	    }
	  cmds[i].f(stack, atoi(token));
	  break;
	}
      i++;
    }
  /*  printf("L%d: unknown instruction %s", n, token);
      exit(EXIT_FAILURE); */
 }
