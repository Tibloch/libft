/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 01:46:34 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/17 21:18:54 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		(*f)(i, s);
		i++;
		s++;
	}
}

/*void	ft_plusone(unsigned int i, char *str)
{
	if (i % 2)
		(*str)++;
}

int	main()
{
	char *s = malloc(sizeof(char) * 7);
	s = "string";
	ft_striteri(s, ft_plusone);
	printf("%s\n", s);
}*/
