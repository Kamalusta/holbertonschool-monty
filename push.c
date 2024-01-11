#include "monty.h"

void push (stack_t **stack, int line_number)
{
  stack_t *node = malloc(sizeof(stack_t));
  node->n = line_number;
  node->next = *stack
  node->prev = NULL;
  if (*stack)
      (*stack)->prev = node;
  *stack = node;
}
