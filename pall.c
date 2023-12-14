#include "monty.h"

/**
 * print_s - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/

void print_s(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
