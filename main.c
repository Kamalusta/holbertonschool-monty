#include "monty.h"
/**
 * main - give the count arguments
 * @argv: it is void
 * @argc: all atributies
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
  FILE *code;
  char buff[50];
  int i;
  stack_t **stack = malloc(sizeof(stack_t *));
  *stack = NULL;

  if (argc != 2)
    {
      printf("USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
  code = fopen(argv[1], "r");
  if (!code)
    {
      printf("Error: Can't open file %s\n", argv[1]);
      exit(EXIT_FAILURE);
    }
  for (i = 1; fgets(buff, 50, code); i++)
    {
      instruction(stack, buff, i);
    }
  return (0);
}
