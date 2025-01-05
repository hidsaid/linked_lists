#include "ft_list.h"
// int ft_memcmp(void *a, void *b)
// {
// 	unsigned char *ap=(unsigned char *)a;
// 	unsigned char *bp=(unsigned char *)b;
// 	int i=0;
// 	while (ap[i] == bp[i])
// 	{
// 		i++;
// 	}
// 	return ((unsigned char)(ap[i] - bp[i]));
// }
int main()
{
	t_list *list = NULL;
	ft_lstadd_back(&list,ft_lstnew(strdup("Hello")));
	ft_lstadd_back(&list,ft_lstnew(strdup(" everyone")));
	ft_lstadd_back(&list,ft_lstnew(strdup(" How are you?")));
	// ft_lstadd_front(&list,ft_lstnew(strdup("Today is beautiful!")));
	
	ft_lstdisplay(list);
	printf("\n");
	void *content=ft_lstnew(strdup("Hello"));
	// ft_list_remove_if(&list,content,&);
	// void *p=ft_lstnew(strdup(" everyone"));
	// printf("%d",ft_memcmp(content,p));
	
	ft_list_remove_if(&list, content, memcmp);
	ft_lstdisplay(list);
	printf("\n");
	return (0);
}