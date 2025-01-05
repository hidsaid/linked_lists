#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *rm=NULL;
	tmp = *begin_list;
	// while (tmp != NULL)
	// {
		if ((*cmp)(tmp->data,data_ref) == 0)
		{
			rm = tmp;
			// tmp->next=rm->next;
			tmp=tmp->next;
			*begin_list = tmp;
			free(rm);
		}
	// }
}