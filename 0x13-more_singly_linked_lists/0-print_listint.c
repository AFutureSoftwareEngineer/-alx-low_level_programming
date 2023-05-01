#include "lists.h"

/**
*print_listint - function
*@h: arg
*Return: i * nodes
*Description: prints all elements of a list
*/

size_t print_listint(const listint_t *h)
	{
		size_t i = 0;

		while (h != NULL)
		{
			if (h->n == '\0')
				printf("[0] (nil)\n");
			else
				printf("%d\n", h->n);
			h = h->next;
			i++;
		}
		return (i);
	}
