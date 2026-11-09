/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maincat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:06:27 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/09 21:06:34 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int     main(int ac, char **av)
{
        (void)ac;
        int     len;
        int     size = ft_atoi(av[1]);
        char    dst[20] = "";
        char    src[] = "";
                
        len = ft_strlcat(dst, src, size);
        __builtin_printf("dst = %s\nlen = %d\n\n", dst, len);

        int     len2;   
        char    dst2[20] = "";
        char    src2[] = "";
                
        len2 = strlcat(dst2, src2, size);
        __builtin_printf("dst2 = %s\nlen2 = %d\n\n", dst2, len2);
        return (0);
}

