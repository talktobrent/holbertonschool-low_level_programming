#include "sort.h"

/**
 * insertion_sort_list - sorts soubly linked list in ascending order
 * @list: list given
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *infront = NULL, *inback = NULL, *mover = *list;

	if (*list == NULL)
		return;

	while (mover->next != NULL)
	{
		while (mover->next != NULL && mover->next->n >= mover->n)
			mover = mover->next;
		if (mover->next != NULL)
		{
			infront = mover->next;
			inback = mover->prev;

			mover->next = infront->next;
			mover->prev = infront;

			infront->prev = inback;
			infront->next = mover;


			if (inback != NULL)
				inback->next = infront;
			else
				*list = infront;

			if (mover->next != NULL)
				mover->next->prev = mover;

			if (inback != NULL)
				mover = inback;
			else
				mover = infront;
			print_list(*list);
		}
		else
			break;
	}
}
