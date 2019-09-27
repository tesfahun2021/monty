#include "monty.h"
#include "global.h"
/**
 *opcodecompare - compare and run the opcode functions
 *@stack: pointer to the stack
 *@line_number: command number
 *@opcode: the opcode to iterpret
 *Return: void
 */
void opcodecompare(stack_t **stack, unsigned int line_number, char *opcode)
{
	int i = 0;

	instruction_t ops[] = {
		{"push", push}, {"pall", pall}, {"pint", pint},
		{"pop", pop}, {"swap", swap}, {"add", add},
		{"nop", nop}, {NULL, NULL}
	};

	while (ops[i].opcode != NULL)
	{
		if (_strcmp(opcode, ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_number);
			return;
		}
		i++;
	}
	printf("L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
