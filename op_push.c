#include "monty.h"

/**
  * push - Adds a new node at the beginning of the stack
  * @stack: The head of the stack
  * @param: The value to adds on the stack
  * Return: Nothing
  */
void push(stack_t **stack, unsigned int param)
{
stack_t *new = NULL;

new = malloc(sizeof(stack_t));
if (new == NULL)
handle_error(ERR_BAD_MALL, NULL, 0, NULL);

new->n = param;
if (*stack)
{
new->next = *stack;
new->prev = (*stack)->prev;
(*stack)->prev = new;
*stack = new;
return;
}
new->next = *stack;
new->prev = NULL;
*stack = new;
}

/**
  * push_queue - Adds a new node at the end of the stack
  * @stack: The head of the stack
  * @param: The value to adds on the stack
  * Return: Nothing
  */
void push_queue(stack_t **stack, unsigned int param)
{
stack_t *x = NULL, *new = NULL;
new = malloc(sizeof(stack_t));
if (new == NULL)
handle_error(ERR_BAD_MALL, NULL, 0, NULL);

new->n = param;
if (*stack)
{
x = *stack;
while (x->next != NULL)
x = x->next;

new->next = NULL;
new->prev = x;
x->next = new;
return;
}
new->next = *stack;
new->prev = NULL;
*stack = new;
}
