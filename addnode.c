#include "monty.h"
/**
 * addnode - function which adds node
 * @head:head of node
 * @d:data
 * Return:nothing
*/
void addnode(stack_t **head, int d)
{

	stack_t *newnode, *temp;

	temp = *head;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
	{
		temp->prev = newnode;
	}
	newnode->n = d;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
}
