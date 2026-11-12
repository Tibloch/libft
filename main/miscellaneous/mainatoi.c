/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 20:03:50 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/11 20:29:01 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	printf("S=-2147483648\tM = %d\t\tO = %d\n", ft_atoi("-2147483648"), atoi("-2147483648"));
	printf("S=0\tM = %d\t\tO = %d\n", ft_atoi("0"), atoi("0"));
	printf("S=+2147483647\tM = %d\t\tO = %d\n", ft_atoi("+2147483647"), atoi("+2147483647"));
	printf("S=++21\tM = %d\t\tO = %d\n", ft_atoi("++21"), atoi("++21"));
	printf("S=--21\tM = %d\t\tO = %d\n", ft_atoi("--21"), atoi("--21"));
	printf("S=-+21\tM = %d\t\tO = %d\n", ft_atoi("-+21"), atoi("-+21"));
	printf("S=+-21\tM = %d\t\tO = %d\n", ft_atoi("+-21"), atoi("+-21"));
	printf("S=   21\tM = %d\t\tO = %d\n", ft_atoi("   21"), atoi("   21"));
	printf("S=\x09 \xa \xb \xc \xd -21\tM = %d\t\tO = %d\n", ft_atoi("\x09 \xa \xb \xc \xd -21"), atoi("\x09 \xa \xb \xc \xd -21"));
	printf("S=21q47\tM = %d\t\tO = %d\n", ft_atoi("21q47"), atoi("21q47"));
}
