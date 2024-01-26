#include "lists.h"


int traverseLists(listint_t **storage, listint_t *checker)
{
    /* the first element is the number*/
    int number;
    listint_t * current;
    current = *storage;
    while (current != NULL)
    {
        number = (current)->n;
        if (number == checker->n)
        {
            return 1;
        }
        current = current->next;
    }
    return 0;
}

int check_cycle(listint_t *list)
{
    /* add only one element temporarily*/
    int res;
    listint_t *storage = malloc(sizeof(listint_t)), *current;
    listint_t *tempStorage;
    listint_t *HEAD;

    current = list;
    if (current != NULL)
    {
        storage->n = current->n;
        storage->next = NULL;
    }
    else
    {
        return 0;
    }
    current = current->next;
    HEAD = storage;
    while (current != NULL)
    {
        res = traverseLists(&HEAD, current);
        if (res == 1)
            return 1;
        
        tempStorage = malloc(sizeof(listint_t));
        tempStorage->n = current->n;
        tempStorage->next = NULL;
        storage->next = tempStorage;
        storage = tempStorage;
        current = current->next;
    }
    return 0;
}

