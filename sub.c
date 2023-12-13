#include "monty.h"

/**
 * subs - Function subtracts the top two elements of a stack
 * @head: Head of the stack
 * @cntr: Counts line numbers
 *
 * Return: Nothing
 */

void subs(stack_t **head, unsigned int cntr)
{
	stack_t *x;
	int sus, nodes;

	x = *head;

	for (nodes = 0; x != NULL; nodes++)
	{
		x = x->next;
	}

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cntr);
		fclose(bus.fl);
		free(bus.cnt);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}

	x = *head;
	sus = x->next->n - x->n;
	x->next->n = sus;
	*head = x->next;
	free(x);
}
