#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct var - sruct
 * @ar:arguments
 * @f:file
 * @line:linemun
 * @sq:to check if stack or queue
 */
typedef struct var
{
	char *ar;
	FILE *f;
	char *line;
	int sq;
} var;
extern var varies;
ssize_t getstdin(char **lineptr, int f);
void push(stack_t **head, unsigned int num);
void addnode(stack_t **head, int d);
void pal(stack_t **head, unsigned int num);
void peek(stack_t **head, unsigned int num);
int instruct(char *line, stack_t **stack, unsigned int num, FILE *f);
void freem(stack_t *head);
void pop(stack_t **head, unsigned int num);
void swap2elements(stack_t **head, unsigned int num);
void add2node(stack_t **head, unsigned int num);
void nopnode(stack_t **head, unsigned int num);
void subnode(stack_t **head, unsigned int num);
void div2node(stack_t **head, unsigned int num);
void mul(stack_t **head, unsigned int num);
void mod(stack_t **head, unsigned int num);

#endif
