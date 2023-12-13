#include "monty.h"

/**
 * rotates_top - Function rotates the stack to the top
 * @head: Head of the stack
 * @cntr: Counts line numbers
 *
 * Return: Nothing
 */

void rotates_top(stack_t **head,  __attribute__((unused)) unsigned int cntr)
{
	stack_t *tempo = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	aux = (*head)->next;
	aux->prev = NULL;

	while (tempo->next != NULL)
	{
		tempo = tempo->next;
	}

	tempo->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tempo;
	(*head) = aux;
}
