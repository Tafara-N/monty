#include "monty.h"

/**
 * adds - Function adds the top two elements of a stack
 * @head: Head of the stack
 * @cntr: Counts line number
 *
 * Return: Nothing
 */

void adds(stack_t **head, unsigned int cntr)
{
	stack_t *hd;
	int leng = 0, x;

	hd = *head;

	while (hd)
	{
		hd = hd->next;
		leng++;
	}

	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", cntr);
		fclose(bus.fl);
		free(bus.cnt);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}

	hd = *head;
	x = hd->n + hd->next->n;
	hd->next->n = x;
	*head = hd->next;
	free(hd);
}
