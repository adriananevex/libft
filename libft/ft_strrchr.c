/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:05:08 by neves             #+#    #+#             */
/*   Updated: 2025/10/23 23:26:38 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *c, int i)
{
	unsigned char		d;
	const unsigned char	*p;
	size_t				len;

	d = (unsigned char)i;
	p = (const unsigned char *)c;
	len = ft_strlen(c);
	p += len;
	while (1)
	{
		if (*p == d)
		{
			return ((char *)p);
		}
		if (p == (const unsigned char *)c)
		{
			break ;
		}
		p--;
	}
	return (NULL);
}
