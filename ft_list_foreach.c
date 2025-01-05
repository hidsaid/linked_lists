#include "ft_list.h"

char* to_uppercase(char *p)
{
	int i=0;
	while (p[i])
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] -= 32;
		}
		i++;
	}
	return (p);
}

void fun(void *ptr)
{
	char *p=(char *)ptr;
	to_uppercase(p);
}


void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != NULL)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

int main()
{
	t_list *new = malloc(1*sizeof(t_list));
	new->next = NULL;
	new->data = strdup("hello");
	ft_list_foreach(new,&fun);
	printf("%s",new->data);
	return (0);
}