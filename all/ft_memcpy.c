/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 22:43:25 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/10 22:53:53 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a_dst;
	char	*a_src;
	size_t	i;

	i = 0;
	a_dst = (char *)dst;
	a_src = (char *)src;
	while (i < n)
	{
		a_dst[i] = a_src[i];
		i++;
	}
	return (dst);
}
