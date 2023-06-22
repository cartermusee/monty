#include "monty.h"

/**
 * mod-function which divides two nodes
 * @head:head of a stack
 * @num:number
 * Return:nothing
*/
void mod(stack_t **head, unsigned int num)
{
	stack_t *temp;
	int mod, i = 0;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", num);
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
	mod = temp->next->n % temp->n;
	temp->next->n = mod;
	*head = temp->next;
	free(temp);
}
