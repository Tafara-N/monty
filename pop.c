#include "monty.h"

/**
 * pops - Function to remove the last element added to the stack, reducing its
 *																size by one
 * @head: Head of the stack
 * @cntr: Counts line numbers
 *
 * Return: Nothing
 */

void pops(stack_t **head, unsigned int cntr)
{
	stack_t *hd;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cntr);
		fclose(bus.fl);
		free(bus.cnt);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}

	hd = *head;
	*head = hd->next;
	free(hd);
}
