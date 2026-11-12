/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maincpycat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:23:42 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/12 00:00:13 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>

int     main()
{
	char dst[] = "destination";
	char src[] = "source";
	int len = strlcat(dst, src, 15);

	__builtin_printf("%s\n%d", dst, len);
}
