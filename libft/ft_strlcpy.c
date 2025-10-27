/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:36:44 by aneves            #+#    #+#             */
/*   Updated: 2025/10/24 20:50:05 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = 0;
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if (size > 0)
	{
		i = 0;
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len_src);
}

/* #include <stdio.h>

int	main(void)
{
	char src[] = "Adriana";
	char dest[5];
	size_t len;

	len = ft_strlcpy(dest, src, sizeof(dest));

	printf("dest = '%s'\n", dest);
	printf("tamanho de src = %zu\n", len);

	return (0);
} */