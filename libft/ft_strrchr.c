/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:51:16 by aneves            #+#    #+#             */
/*   Updated: 2025/10/24 21:00:52 by aneves           ###   ########.fr       */
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
