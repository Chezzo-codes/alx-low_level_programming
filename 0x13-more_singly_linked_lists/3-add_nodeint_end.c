#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 *@head:pointer to last node
 *@n:integer elment in node
 * Return:new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *ptr, *new;
    ptr = *head;
    new = malloc(sizeof(listint_t));

    new->n = n;
    new->next = NULL;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new;
    return (new);
}
