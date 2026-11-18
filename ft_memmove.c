/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 20:09:38 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/18 00:55:07 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*arr_dst;
	char	*arr_src;
	char	arr_tmp[1];
	size_t	i;

	i = 0;
	arr_src = (char *)src;
	arr_dst = (char *)dst;
	if (dst - src > 0)
	{
		while (n > 0)
		{
			arr_tmp[0] = arr_src[n - 1];
			arr_dst[n - 1] = arr_tmp[0];
			n--;
		}
		return (dst);
	}
	while (i < n)
	{
		arr_tmp[0] = arr_src[i];
		arr_dst[i] = arr_tmp[0];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>

int	main()
{
	char dst0[] = "                                                       ";
	ft_memmove(dst0, "0000000000000000000000", 55);
	printf("%s\n", dst0);
}*/
