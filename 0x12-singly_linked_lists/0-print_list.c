#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints elements of a list
 * @h:struct
 * Return:number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0k;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[%d] %s\n", 0, "(nil)");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
			count++;
		}
	}
	return (count);
}
