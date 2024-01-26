#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *current;
    listint_t *newNode;
    
    newNode = malloc(sizeof(listint_t));
    newNode->n = number;
    current = *head;
    if (current == NULL)
    {
        *head = newNode;
        return (*head);
    }
    else if(current->next == NULL)
    {
        if (number > current->n)
        {
            current->next = newNode;
            newNode->next = NULL;
        }
        else
        {
            newNode->next = *head;
            *head = newNode;
        }
        return (*head);
    }
    
    while (current->next != NULL)
    {
        if (current->next->n > number)
        {
            newNode->next = current->next;
            current->next = newNode;
            return (*head);
        }
        current = current->next;
    }
    current->next = newNode;
    newNode->next = NULL;
    return (*head);
}


