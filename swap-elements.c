#include "monty.h"
/**
 * swap2elements-funtion to swap elements
 * @head:stack head
 * @num:number of times
 * Return:nothing
*/
void swap2elements(stack_t **head, unsigned int num)
{
	stack_t *temp;

	int t, i = 0;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", num);
		fclose(varies.f);
		free(varies.line);
		freem(*head);
		exit(EXIT_FAILURE);
	}
	t = temp->n;
	temp->n = temp->next->n;
	temp->next->n = t;
}
