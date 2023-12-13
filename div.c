#include "monty.h"

/**
 * divide - Function divides the top two elements of the stack.
 * @head: Head of the stack
 * @cntr: Counts line numbers
 *
 * Return: Nothing
 */

void divide(stack_t **head, unsigned int cntr)
{
	stack_t *hd;
	int leng = 0, aux;

	hd = *head;

	while (hd)
	{
		hd = hd->next;
		leng++;
	}

	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", cntr);
		fclose(bus.fl);
		free(bus.cnt);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}

	hd = *head;

	if (hd->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cntr);
		fclose(bus.fl);
		free(bus.cnt);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}

	aux = hd->next->n / hd->n;
	hd->next->n = aux;
	*head = hd->next;
	free(hd);
}

