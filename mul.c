#include "monty.h"
/**
 * mul - function to multiply
 * @head:head of stack
 * @num:line count
 * Return:nothing
*/
void mul(stack_t **head, unsigned int num)
{
	stack_t *temp;
	int i = 0, mul;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", num);
		fclose(varies.f);
		free(varies.line);
		freem(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	mul = temp->next->n * temp->n;
	temp->next->n = mul;
	*head = temp->next;
	free(temp);
}
