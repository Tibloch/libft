/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 22:59:28 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/12 23:17:23 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr_s;
	size_t	i;
	
	i = 0;
	arr_s = (unsigned char *)s;
	while (i < n)
	{
		if (arr_s[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}

int	main()
{
	__builtin_printf("%s\n", (char *)ft_memchr("string", 105, 6));
	__builtin_printf("%s\n", (char *)memchr("string", 105, 6));
}
