#include "lists.h"
/**
 * print_dlistint - counts number of nodes
 * @h: pointer to linked list
 *
 * Return: Node count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		while (ptr != NULL)
		{
			printf("%d\n", ptr->n);
			count++;
			ptr = ptr->next;
		}
	}
	return (count);
}
