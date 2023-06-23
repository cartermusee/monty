#include "monty.h"
/**
 * freem- function frees stack
 * @head:head of stack
 * Return:nothing
 *
*/
void freem(stack_t *head)
{
	stack_t *tem, *current;

	current = head;
	while (current != NULL)
	{
		tem = current->next;
		free(current);
		current = tem;
	}
}
