#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *rm;
	tmp = *begin_list;
	while (tmp != NULL)
	{
		if ((*cmp)(tmp->data,data_ref) == 0)
		{
			rm = tmp;
			tmp=rm->next;
			free(rm);
			if(!tmp)
				return;
		}else if((*cmp)(tmp->next->data,data_ref) == 0 && tmp->next!=NULL)
		{
			rm=tmp->next;
			tmp->next=rm->next;
			free(rm);
			tmp=tmp->next;
		}else if ((*cmp)(tmp->next->data,data_ref) && tmp->next == NULL)
		{
			rm=tmp->next;
			tmp->next=rm->next;
			free(rm);
			tmp=tmp->next;
		}
			tmp=tmp->next;
			free(rm);
	}
	
}