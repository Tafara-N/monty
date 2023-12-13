#include "monty.h"

/**
 * rotates_bottom- Function rotates the stack to the bottom
 * @head: Head of the stack
 * @cntr: Counts line numbers
 *
 * Return: Nothing
 */

void rotates_bottom(stack_t **head, __attribute__((unused)) unsigned int cntr)
{
	stack_t *tempo;

	tempo = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	while (tempo->next)
	{
		tempo = tempo->next;
	}

	tempo->next = *head;
	tempo->prev->next = NULL;
	tempo->prev = NULL;
	(*head)->prev = tempo;
	(*head) = tempo;
}
