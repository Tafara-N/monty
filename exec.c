#include "monty.h"

void tafara(void);

/**
* exec - Function executes the opcodes
* @stack: Head of a linked list (stack)
* @cntr: Counts line numbers
* @fl: A ptr to the monty file
* @cnt: Counts line contents
*
* Return: Nothing
*/

int exec(char *cnt, stack_t **stack, unsigned int cntr, FILE *fl)
{
	instruction_t opst[] = {
				{"push", pushes}, {"pall", palls}, {"pint", p_Int},
				{"pop", pops},
				{"swap", swaps},
				{"add", adds},
				{"nop", none},
				{"sub", subs},
				{"div", divide},
				{"mul", multi},
				{"mod", modul},
				{"pchar", putChar},
				{"pstr", printString},
				{"rotl", rotates_top},
				{"rotr", rotates_bottom},
				{"queue", queues},
				{"stack", stacks},
				{NULL, NULL}
				};

	unsigned int x = 0;
	char *op;

	op = strtok(cnt, " \n\t");

	if (op && op[0] == '#')
	{
		return (0);
	}
	bus.arg = strtok(NULL, " \n\t");

	while (opst[x].opcode && op)
	{
		if (strcmp(op, opst[x].opcode) == 0)
		{	opst[x].f(stack, cntr);
			return (0);
		}
		x++;
	}

	if (op && opst[x].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", cntr, op);
		fclose(fl);
		free(cnt);
		freeStack(*stack);
		exit(EXIT_FAILURE);
	}

	return (1);
}
