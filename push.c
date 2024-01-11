#include "monty.h"

void push (stack_t **stack, int line_number)
{
  stack_t *node = malloc(sizeof(stack_t));
  node->n = line_number;
  if ((*stack) != NULL)
  node->next = *stack;
  else
    node->next = NULL;
  node->prev = NULL;
  *stack = node;
}
