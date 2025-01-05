#include "ft_list.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp,*current;

	if(!lst || !*lst || !del)
		return;
	tmp = *lst;
	while (tmp!=NULL)
	{
		current = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = current;
	}
}