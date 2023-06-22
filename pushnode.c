#include "monty.h"
/**
 * push - push node to the stack
 * @head:  head
 * @num: number
 * Return: nothing
*/
void push(stack_t **head, unsigned int num)
{
	int m, i = 0, d = 0;

	if (varies.ar)
	{
		if (varies.ar[0] == '-')
		{
			i++;
		}
		for (; varies.ar[i] != '\0'; i++)
		{
			if (varies.ar[i] > 57 || varies.ar[i] < 48)
			{
				d = 1;
			}
		}
		if (d == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(varies.f);
			free(varies.line);
			freem(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(varies.f);
		free(varies.line);
		freem(*head);
		exit(EXIT_FAILURE);
	}
	m = atoi(varies.ar);
	if (varies.sq == 0)
	{
		addnode(head, m);
	}
}
