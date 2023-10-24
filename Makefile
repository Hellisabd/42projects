
NAME	=	libft.a

SRCS	=	ft_isalpha.c	\
		ft_strlen.c	\
		ft_isprint.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strncmp.c	\
		ft_strchr.c	\
		ft_strrchr.c	\
		ft_bzero.c	\
		ft_strnstr.c	\
		ft_strlcat.c	\
		ft_memset.c	\
		ft_memcpy.c	\
		ft_memchr.c	\
		ft_memmove.c	\
		ft_memcmp.c	\
		ft_atoi.c	\
		ft_split.c	\
		ft_strjoin.c	\
		ft_itoa.c	\
		ft_strdup.c	\
		ft_strlcpy.c	\
		ft_calloc.c			

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

CFLAGS += 	-Wall -Wextra -Werror

RM	=	rm -f

all	:	
		@make $(NAME)

$(NAME)	:	$(OBJS)
		-ar -crs  $(NAME) $(OBJS)
clean	:	
		$(RM) $(OBJS)

fclean	:	
		$(RM) $(NAME) $(OBJS)

re	:	fclean all

ex	:	fclean all clean
