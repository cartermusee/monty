#include "monty.h"
/**
 * instruct - executes the opcode
 * @line: line content
 * @stack: head linked list - stack
 * @num: line_counter
 * @f: poiner to monty file
 * Return: no return
 */
int instruct(char *line, stack_t **stack, unsigned int num, FILE *f)
{
	unsigned int i = 0;
	char *token;

	instruction_t set[] = {{"push", push}, {"pall", pal}, {"pint", peek},
		{"pop", pop},
		{"swap", swap2elements},
		{"add", add2node},
		{"nop", nopnode}, {"sub", subnode},
		{"div", div2node},/*
		{"mul", mul},
		{"mod", mod},*/
		{NULL, NULL}
	};
	token = strtok(line, " \n\t");
	if (token && token[0] == '#')
	{
		return (0);
	}
	varies.ar = strtok(NULL, " \n\t");
	while (set[i].opcode && token)
	{
		if (strcmp(token, set[i].opcode) == 0)
		{
			set[i].f(stack, num);
			return (0);
		}
		i++;
	}
	if (token && set[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", num, token);
		fclose(f);
		free(line);
		freem(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
