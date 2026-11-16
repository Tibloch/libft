/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:07:50 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/16 03:05:54 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;

	if (!size)
		return (malloc(0));
	if ((nmemb * size) / size != nmemb)
		return (NULL);
	array = malloc(size * nmemb);
	if (!array)
		return (NULL);
	ft_memset(array, 0, nmemb);
	return (array);
}
