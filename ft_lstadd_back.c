#include "ft_list.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return;
	if(!*lst)
	{
		*lst = new;
		return;
	}
	t_list *tmp = ft_lstlast(*lst);
	tmp->next=new;
}