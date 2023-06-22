#include "monty.h"

/**
 * pal - function to display
 * @head:head of stack
 * @num:numline
 * Return:nothing
*/

void pal(stack_t **head, unsigned int num)
{
	stack_t *tmp;
	(void)num;

	tmp = *head;
	if (*head == NULL)
	{
		return;
	}
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
