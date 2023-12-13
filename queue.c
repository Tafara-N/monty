#include "monty.h"

/**
 * queues - Function prints the top elements of the stack
 * @head: Head of the stack
 * @cntr: Counts line number
 *
 * Return: Nothing
 */

void queues(stack_t **head, unsigned int cntr)
{
	(void)head;
	(void)cntr;
	bus.lifi = 1;
}

/**
 * addsQueue - Function adds a node to the tail of the stack
 * @n: A new value to append
 * @head: Head of the stack
 *
 * Return: Nothing
 */

void addsQueue(stack_t **head, int n)
{
	stack_t *current_node, *aux;

	aux = *head;
	current_node = malloc(sizeof(stack_t));

	if (current_node == NULL)
	{
		printf("Error\n");
	}

	current_node->n = n;
	current_node->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}

	if (!aux)
	{
		*head = current_node;
		current_node->prev = NULL;
	}

	else
	{
		aux->next = current_node;
		current_node->prev = aux;
	}
}
