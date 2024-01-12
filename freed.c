#include "monty.h"

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
