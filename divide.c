#include "monty.h"
/**
 * div2node-function which divides two nodes
 * @head:head of a stack
 * @num:number
 * Return:nothing
*/
void div2node(stack_t **head, unsigned int num)
{
	stack_t *temp;
	int div, i = 0;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", num);
		fclose(varies.f);
		free(varies.line);
		freem(*head);
		exit(EXIT_FAILURE);
	}
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", num);
		fclose(varies.f);
		free(varies.line);
		freem(*head);
		exit(EXIT_FAILURE);
	}
	div = temp->next->n / temp->n;
	temp->next->n = div;
	*head = temp->next;
	free(temp);
}
