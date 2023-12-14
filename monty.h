#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */

typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void print_c(stack_t **head, unsigned int counter);
void print_str(stack_t **head, unsigned int counter);
void add_to_stack(stack_t **head, unsigned int number);
void print_s(stack_t **head, unsigned int number);
void print_top(stack_t **head, unsigned int number);
int executeop_opco(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_doubl(stack_t *head);
void print_t(stack_t **head, unsigned int counter);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void swap_s(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void nothing(stack_t **head, unsigned int counter);
void sust(stack_t **head, unsigned int counter);
void add_new_node(stack_t **head, int n);
void add_queu(stack_t **head, int n);
void print_q(stack_t **head, unsigned int counter);
void p_stack(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void top_multi(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);

void rotate_stack(stack_t **head, unsigned int counter);
void rotate_bottom(stack_t **head, __attribute__((unused)) unsigned int counter);

#endif
