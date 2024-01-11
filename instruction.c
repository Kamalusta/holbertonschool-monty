#include "monty.h"

/**
 * instruction - give the count arguments
 * @cmdline: string line
 * 
 * Return: Always 0.
 */
void instruction(char *cmdline, int n)
{
  char *token;
  instruction_t cmds[] = {{"push", push}, {"pall", pall}, {NULL, NULL}};
  stack_t **stack = NULL;
  int i = 0;
  
  token = strtok(cmdline, " \t\n");
  /*while (token)
    {
  printf("%s\n", token); */
  while (cmds[i].opcode)
    {
      if (strcmp(cmds[i].opcode, token) == 0)
	{
	  token = strtok(NULL, " \t\n");
	  if (!token)
	    {
	      printf("L%d: usage: push integer", n);
	      exit(EXIT_FAILURE);
	    }
	  cmds[i].f(stack, atoi(token));
	  break;
	}
      i++;
    }
  printf("netice %d", stack[0]->n);

	/*token = strtok(NULL, " \t\n");
    }*/
  
}
