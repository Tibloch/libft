/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 20:09:38 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/16 00:51:49 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*arr_dst;
	char	*arr_src;
	char	arr_tmp[10];
	size_t	i;
	size_t	j;

	j = 0;
	arr_src = (char *)src;
	arr_dst = (char *)dst;
	while (n > j)
	{
		i = 0;
		while (i < 10 && i < n)
		{
			arr_tmp[i] = arr_src[i];
			arr_dst[j] = arr_tmp[i];
			i++;
			j++;
		}
	}
	return (dst);
}
