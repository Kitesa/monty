#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = (*stack)->next;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	(void)line_number;
}
