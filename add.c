#include "monty.h"

/**
 * add2node-function which adds two nodes
 * @head:head of a stack
 * @num:number
 * Return:nothing
*/
void add2node(stack_t **head, unsigned int num)
{
	stack_t *temp;
	int sum, i = 0;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", num);
		fclose(varies.f);
		free(varies.line);
		freem(*head);
		exit(EXIT_FAILURE);
	}
	sum = temp->n + temp->next->n;
	temp->next->n = sum;
	*head = temp->next;
	free(temp);
}
