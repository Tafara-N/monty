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
	stack_t *aux;
	int sus, nodes;

	aux = *head;

	for (nodes = 0; aux != NULL; nodes++)
	{
		aux = aux->next;
	}

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cntr);
		fclose(bus.fl);
		free(bus.cnt);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}

	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
