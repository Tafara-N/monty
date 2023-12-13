#include "monty.h"

/**
 * p_Int - Function for pointer to an integer
 * @head: Head of the stack
 * @cntr: Counts line numbers
 *
 * Return: Nothing
 */

void p_Int(stack_t **head, unsigned int cntr)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", cntr);
		fclose(bus.fl);
		free(bus.cnt);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
