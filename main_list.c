#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	t_list	**lst;
	(*lst)->content = ft_lstnew("zero");
	(*lst)->next = NULL;
	t_list	*new = ft_lstnew("one");
	ft_lstadd_front(lst, new);

}
