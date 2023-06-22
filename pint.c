#include "monty.h"
/**
 * peek - function to print the top
 * @head:head of stack
 * @num:numbers
 * Return :0
*/
void peek(stack_t **head, unsigned int num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", num);
		fclose(varies.f);
		free(varies.line);
		freem(*head);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", (*head)->n);
	}
}
