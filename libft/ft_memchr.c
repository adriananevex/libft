/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:00:43 by neves             #+#    #+#             */
/*   Updated: 2025/10/23 23:23:56 by neves            ###   ########.fr       */
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
