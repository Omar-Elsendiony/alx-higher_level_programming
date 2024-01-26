// #include "lists.h"

// int populateLists()
// {

// }

// int traverseLists(listint_t **storage, listint_t *checker)
// {
//     /* the first element is the number*/
//     int number;
//     listint_t * current;
//     current = *storage;
//     while (current != NULL)
//     {
//         number = (current)->n;
//         for (int i = 0; i < number; i++)
//         {
//             if (current == checker)
//             {
//                 return 0;
//             }
//             current = current->next;
//         }
//         if (current != NULL)
//         {
//             current = current->next;
//         }
//     }
//     return 1;
// }

// int check_cycle(listint_t *list)
// {
//     /* add only one element temporarily*/
//     int i = 1, res, j = 0;
//     listint_t **storage = malloc(sizeof(listint_t) * (i + 2));
//     listint_t **tempStorage;
//     *storage = malloc(sizeof(listint_t));
//     (*storage)->n = i;
//     listint_t *current;

//     current = list;
//     if (current != NULL)
//     {
//         storage[1]->n = current->n;
//         storage[2] = NULL;
//         current = current->next;
//     }
//     i += 1;
//     while (current != NULL)
//     {
//         res = traverseLists(storage, current);
//         if (res == 1)
//             return 1;
//         if (j == i - 1)
//         {
//             tempStorage = malloc(sizeof(listint_t) * (i + 2));

//         }
        
//         storage[0] = current;
//         current = current->next;
//     }
//     return 1;
// }

