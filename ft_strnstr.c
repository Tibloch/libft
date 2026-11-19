/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 01:24:11 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/19 02:49:09 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && len > 0)
	{
		while ((big[i + j] && little[j])
			&& (big[i + j] == little[j]) && (len - j) > 0)
			j++;
		if (!little[j] && big[i + j - 1] == little[j - 1])
			return ((char *)big + i);
		i++;
		len--;
	}
	return (0);
}
