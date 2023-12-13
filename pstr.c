#include "monty.h"

/**
 * printString - Function prints the string starting from the top of the stack
 * @head: Head of the stack
 * @cntr: Counts line numbers
 *
 * Return: Nothing
 */

void printString(stack_t **head, unsigned int cntr)
{
	stack_t *hd;
	(void)cntr;

	hd = *head;

	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
		{
			break;
		}

		printf("%c", hd->n);
		hd = hd->next;
	}

	printf("\n");
}
