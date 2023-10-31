#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*s_list;

	s_list = malloc(sizeof(*s_list));
	if (!s_list)
		return (NULL);
	s_list->content = content;
	s_list->next = NULL;
	return (s_list);
}
