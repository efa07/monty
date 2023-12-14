#include "monty.h"

/**
 * print_t - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/

void print_t(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_doubl(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
