#include "monty.h"

/**
 * pop - function which pops elemnts
 * @head:head of stack
 * @num:number counts
 * Return:nothing
*/
void pop(stack_t **head, unsigned int num)
{
	stack_t *tmp;

	tmp = *head;
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", num);
		fclose(varies.f);
		free(varies.line);
		freem(*head);
		exit(EXIT_FAILURE);
	}
	else
	{
		*head = tmp->next;
		free(tmp);
	}
}
