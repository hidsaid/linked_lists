#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}t_list;


t_list *ft_lstnew(void *content);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstadd_back(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
void ft_lstdelone(t_list *lst, void (*del)(void*));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstdisplay(t_list *lst);
void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());