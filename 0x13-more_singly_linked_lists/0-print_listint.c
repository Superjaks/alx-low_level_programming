#include "lists.h"
/**
 * print_listint - Entry Point
 * @h: head
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
