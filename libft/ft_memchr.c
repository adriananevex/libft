/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:35:56 by aneves            #+#    #+#             */
/*   Updated: 2025/10/24 20:58:11 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *c, int i, size_t n)
{
	unsigned char	*s;
	unsigned char	t;
	size_t			j;

	s = (unsigned char *)c;
	t = (unsigned char)i;
	j = 0;
	while (j < n)
	{
		if (s[j] == t)
		{
			return ((void *)&s[j]);
		}
		j++;
	}
	return (NULL);
}
