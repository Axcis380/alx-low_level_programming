#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: double pointer to the head of the list
 * @index: index of the node to delete (starting from 0)
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;
    unsigned int i = 0;

    if (*head == NULL)
        return (-1);

    current = *head;

    if (index == 0)
    {
        *head = current->next;
        if (current->next)
            current->next->prev = NULL;
        free(current);
        return (1);
    }

    while (i < index - 1)
    {
        if (current->next == NULL)
            return (-1);
        current = current->next;
        i++;
    }

    if (current->next == NULL)
        return (-1);

    temp = current->next;
    current->next = temp->next;
    if (temp->next)
        temp->next->prev = current;
    free(temp);

    return (1);
}

