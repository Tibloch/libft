/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 23:47:17 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/16 01:18:26 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (unsigned char)c)
		str++;
	if (!*str && (unsigned char)c)
		return (0);
	return ((char *)str);
}

/*int	main()
{
	__builtin_printf("%s\n", ft_strchr("test", 'e'));
	__builtin_printf("%s\n", ft_strchr("e", 256));
	__builtin_printf("%s\n", ft_strchr("test", 'e' - 256));
}*/
