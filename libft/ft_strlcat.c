/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:36:31 by aneves            #+#    #+#             */
/*   Updated: 2025/10/24 20:50:00 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	final_dest;
	size_t	size_src;

	i = 0;
	final_dest = 0;
	while (dest[final_dest])
		final_dest++;
	size_src = 0;
	while (src[size_src])
		size_src++;
	if (final_dest >= dest_size)
	{
		return (final_dest + size_src);
	}
	while (src[i] && (dest_size > final_dest && i < dest_size - final_dest - 1))
	{
		dest[final_dest + i] = src[i];
		i++;
	}
	dest[final_dest + i] = '\0';
	return (final_dest + size_src);
}

/* #include <stdio.h>

int	main(void)
{
	unsigned int	n = 16;
	char s1[] = "Adriana Elisa ";
	char s2[] = "Neves";

	printf("%s\n%s\n", s1, s2);
	ft_strlcat(s1, s2, n);
	printf("%s\n", s1);
} */