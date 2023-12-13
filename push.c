#include "monty.h"

/**
 * pushes - Function adds a node to a stack
 * @head: Head of stack
 * @cntr: Counts line number
 *
 * Return: Nothing
 */

void pushes(stack_t **head, unsigned int cntr)
{
	int n, x = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			x++;

		for (; bus.arg[x] != '\0'; x++)
		{
			if (bus.arg[x] > 57 || bus.arg[x] < 48)
				flag = 1;
		}

		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", cntr);
			fclose(bus.fl);
			free(bus.cnt);
			freeStack(*head);
			exit(EXIT_FAILURE);
		}
	}

	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", cntr);
		fclose(bus.fl);
		free(bus.cnt);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(bus.arg);

	if (bus.lifi == 0)
	{
		addsNode(head, n);
	}
	else
		addsQueue(head, n);
}
