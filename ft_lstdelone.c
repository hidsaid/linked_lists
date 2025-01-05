#include "ft_list.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return;
	(*del)(lst->data);
	free(lst);
}

