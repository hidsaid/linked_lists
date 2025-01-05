#include "ft_list.h"
t_list *ft_lstnew(void *content)
{
	t_list *new = malloc(1 * sizeof(t_list));
	if(!new)
		return (NULL);
	new->data = content;
	new->next = NULL;
	return (new);
}