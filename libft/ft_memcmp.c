/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:36:33 by aneves            #+#    #+#             */
/*   Updated: 2025/10/24 20:49:29 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;
	int				dif;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	dif = 0;
	while (i < n)
	{
		if (t1[i] != t2[i])
		{
			dif = t1[i] - t2[i];
			return (dif);
		}
		i++;
	}
	return (dif);
}
