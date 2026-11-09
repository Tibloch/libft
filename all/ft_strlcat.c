/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:09:23 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/09 22:21:35 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;	
	size_t	len_d;
	size_t	len_s;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	i = 0;
	while (src[i] && size > len_d && (size - len_d - 1) > i)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	if (size > 0)
		dst[len_d + i] = '\0';
	if (size < len_d && size >= 0)
		return (size + len_s);
	return (len_s + len_d);
}
