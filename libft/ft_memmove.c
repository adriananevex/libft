/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:29:16 by aneves            #+#    #+#             */
/*   Updated: 2025/10/24 20:59:19 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s)
	{
		d += len;
		s += len;
		while (len > 0)
		{
			d--;
			s--;
			*d = *s;
			len--;
		}
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}

/* #include <stdio.h>

int main(void)
{
	char str1[] = "Adriana";
	char str2[] = "Adriana";

	ft_memcpy(str1 + 2, str1, 5);
	ft_memmove(str2 + 2, str2, 5);

	printf("ft_memcpy:  %s\n", str1);
	printf("ft_memmove: %s\n", str2);

	return 0;
} */