#include "ft_list.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return;
	while (lst != NULL)
	{
		f(lst->data);
		lst = lst->next;
	}
}