#include "sort.h"

/**
 * insertion_sort_list - sort a list
 *
 * @list: unsorted list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *contain;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	contain = (*list)->next;

	while (contain)
	{
		while (contain->prev != NULL && contain->n < contain->prev->n)
		{
			contain->prev->next = contain->next;
			if (contain->next != NULL)
				contain->next->prev = contain->prev;
			contain->next = contain->prev;
			contain->prev = contain->prev->prev;
			contain->next->prev = contain;
			if (contain->prev == NULL)
				(*list) = contain;
			else
			{
				contain->prev->next = contain;
			}
			print_list(*list);
		}
		contain = contain->next;
	}
}
