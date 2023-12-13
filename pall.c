#include "monty.h"

/**
 * palls - Function prints a stack
 * @head: Head of the stack
 * @cntr: Counts line number (But has no use here)
 *
 * Return: Nothing
 */

void palls(stack_t **head, unsigned int cntr)
{
	stack_t *hd;
	(void)cntr;

	hd = *head;

	if (hd == NULL)
	{
		return;
	}

	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
