CC = cc
NAME = lists.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_list_foreach.c ft_lstadd_back.c ft_lstdelone.c ft_lstlast.c  ft_lstsize.c ft_lstadd_front.c  ft_lstdisplay.c  ft_lstmap.c ft_list_remove_if.c  ft_lstclear.c ft_lstiter.c ft_lstnew.c   
OBJS = $(SRCS:.c=.o)
AR = ar -rcs
RM = rm -rf

all: $(NAME)
$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o:%.c
	$(CC) -c $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all