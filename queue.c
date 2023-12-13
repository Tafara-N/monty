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
	stack_t *current_node, *x;

	x = *head;
	current_node = malloc(sizeof(stack_t));

	if (current_node == NULL)
	{
		printf("Error\n");
	}

	current_node->n = n;
	current_node->next = NULL;

	if (x)
	{
		while (x->next)
			x = x->next;
	}

	if (!x)
	{
		*head = current_node;
		current_node->prev = NULL;
	}

	else
	{
		x->next = current_node;
		current_node->prev = x;
	}
}
