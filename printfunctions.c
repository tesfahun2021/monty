#include "monty.h"
/**
 * pall - prints all the values, starting from the top of the stack
 *@stack: the stack
 *@line_number: the line number of the command
 *Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *itr;

	(void) line_number;
	itr = *stack;
	if (*stack == NULL)
		return;
	while (itr != NULL)
	{
		printf("%d\n", itr->n);
		itr = itr->next;
	}
}
/**
 *pint - prints the top of the stack
 *@stack: point the top of the stack
 *@line_number: the line number of the command
 *
 *Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
