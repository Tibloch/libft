#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


//void	ft_lstadd_front(t_list **lst, t_list *new);

int	main()
{
	t_list	*lst = ft_lstnew("one");
	lst->next = ft_lstnew("two");
	t_list	*new = ft_lstnew("zero");
	ft_lstadd_front(&lst, new);
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}

}
