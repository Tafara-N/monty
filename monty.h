#ifndef MONTY_H
#define MONTY_H

#define  _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_s - Line content, variables -arguments and file
 * @arg: Args value
 * @fl: A ptr to the monty file
 * @cnt: The line content
 * @lifi: Flag to change queue <-> stack
 *
 * Description: Holds values throughout the program
 */

typedef struct bus_s
{
	char *arg;
	FILE *fl;
	char *cnt;
	int lifi;
}  bus_t;

extern bus_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int fl);
char  *clean_line(char *cnt);
void pushes(stack_t **head, unsigned int number);
void palls(stack_t **head, unsigned int number);
void p_Int(stack_t **head, unsigned int number);
int exec(char *cnt, stack_t **head, unsigned int cntr, FILE *fl);
void freeStack(stack_t *head);
void pops(stack_t **head, unsigned int cntr);
void swaps(stack_t **head, unsigned int cntr);
void adds(stack_t **head, unsigned int cntr);
void none(stack_t **head, unsigned int cntr);
void subs(stack_t **head, unsigned int cntr);
void divide(stack_t **head, unsigned int cntr);
void multi(stack_t **head, unsigned int cntr);
void modul(stack_t **head, unsigned int cntr);
void putChar(stack_t **head, unsigned int cntr);
void printString(stack_t **head, unsigned int cntr);
void rotates_top(stack_t **head, unsigned int cntr);
void rotates_bottom(stack_t **head, __attribute__((unused)) unsigned int cntr);
void addsNode(stack_t **head, int n);
void addsQueue(stack_t **head, int n);
void queues(stack_t **head, unsigned int cntr);
void stacks(stack_t **head, unsigned int cntr);

#endif /* MONTY_H */
