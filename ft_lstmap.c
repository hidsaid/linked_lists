#include "ft_list.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void *content;
	t_list *new_list;
	if(!lst || !f || !del)
		return (NULL);
	while (lst != 	NULL)
	{
		content = f(lst->data);
		t_list *node=ft_lstnew(content);
		if (!node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}