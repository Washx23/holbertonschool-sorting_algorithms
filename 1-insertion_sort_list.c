#include "sort.h"

/**
 * insertion_sort_list - inserton sort alg.
 * @list: list to be sorted
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *var1, *var2;

	if (!list || !(*list))
		return;

	var1 = *list;
	while (var1)
	{
		var2 = var1->next;

		while (var1->prev && var1->n < var1->prev->n)
		{
			var1->prev->next = var1->next;

			if (var1->next)
				var1->next->prev = var1->prev;

			var1->next = var1->prev;
			var1->prev = var1->prev->prev;

			if (var1->prev)
				var1->prev->next = var1;

			var1->next->prev = var1;

			if (!var1->prev)
				*list = var1;

			print_list(*list);
		}
		var1 = var2;
	}
}
