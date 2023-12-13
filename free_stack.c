#include "monty.h"

/**
* freeStack - Function frees a doubly linked list
* @head: Head of the stack
*/

void freeStack(stack_t *head)
{
	stack_t *x;

	x = head;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
