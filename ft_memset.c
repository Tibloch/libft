/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:16:30 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/10 22:28:24 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*arr;
	size_t	i;

	i = 0;
	arr = (char *)s;
	while (i < n)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
