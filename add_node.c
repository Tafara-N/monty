#include "monty.h"

/**
 * addsNode - Function adds a node to the head stack
 * @head: Head of the stack
 * @n: A new value to append
 *
 * Return: Nothing
 */

void addsNode(stack_t **head, int n)
{

	stack_t *current_node, *x;

	x = *head;
	current_node = malloc(sizeof(stack_t));

	if (current_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}

	if (x)
	{
		x->prev = current_node;
	}

	current_node->n = n;
	current_node->next = *head;
	current_node->prev = NULL;
	*head = current_node;
}
