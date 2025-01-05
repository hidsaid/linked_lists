#include "ft_list.h"

void ft_lstdisplay(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s =>",(char *)(lst->data));
		lst = lst->next;
	}
}