#include "lists.h"
/**
 * print_dlistint - returns length of  linked list
 * @h: pointer to linked list
 *
 * Return: Node count
 */
size_t dlistint_len(const dlistint_t *h)
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
                        count++;
                        ptr = ptr->next;
                }
        }
        return (count);
}
