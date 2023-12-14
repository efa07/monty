#include "monty.h"

/**
 * print_c - prints char at the top of the stack
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/

void print_c(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_doubl(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_doubl(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
