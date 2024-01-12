#include "monty.h"

void push (stack_t **stack, unsigned int line_number)
{
  stack_t *node = malloc(sizeof(stack_t));
  if (!node)
    {
      fprintf(stderr, "Error: malloc failed");
      exit(EXIT_FAILURE);
    }
  node->n = line_number;
  node->next = *stack;
  node->prev = NULL;
  if (*stack)
    (*stack)->prev = node;
  *stack = node;
}
