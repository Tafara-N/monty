#include "monty.h"

/**
 * putChar - Function prints the characters at the top of the stack
 * @head: Head of the stack
 * @cntr: Counts line numbers
 *
 * Return: Nothing
 */

void putChar(stack_t **head, unsigned int cntr)
{
	stack_t *hd;

	hd = *head;

	if (!hd)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", cntr);
		fclose(bus.fl);
		free(bus.cnt);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}

	if (hd->n > 127 || hd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", cntr);
		fclose(bus.fl);
		free(bus.cnt);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", hd->n);
}
