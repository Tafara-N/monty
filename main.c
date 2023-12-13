#include "monty.h"

void tafara(void);

bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - Entry point to monty
 * @argc: Arguments passed
 * @argv: The location of monty file
 *
 * Return: Success (Always 0)
 */

int main(int argc, char *argv[])
{
	char *cnt;
	FILE *fl;
/*	size_t size = 0;*/
	ssize_t readsLine = 1;
	stack_t *stack = NULL;
	unsigned int cntr = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fl = fopen(argv[1], "r");
	bus.fl = fl;

	if (!fl)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (readsLine > 0)
	{
		cnt = NULL;
/*		readsLine = getline(&cnt, &size, fl); */
		bus.cnt = cnt;
		cntr++;

		if (readsLine > 0)
		{
			exec(cnt, &stack, cntr, fl);
		}
		free(cnt);
	}

	freeStack(stack);
	fclose(fl);
return (0);
}
