#include "monty.h"

/**
  *rotate_stack- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: nothing
 */

void rotate_stack(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	temp = (*head)->next;
	temp->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = temp;
}
