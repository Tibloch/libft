/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:07:50 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/13 00:36:28 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmeb, size_t size)
{
	char	*array;

	if (!nmeb || !size || (nmeb * size > 2147483647))
		return (NULL);
	array = malloc(size * nmeb);
	if (!array)
		return (NULL);
	ft_memset(array, 0, nmeb);
	return (array);
}
