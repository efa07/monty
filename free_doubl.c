#include "monty.h"

/**
* free_doubl - frees a doubly linked list
* @head: head of the stack
*/

void free_doubl(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
