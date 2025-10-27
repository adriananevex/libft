/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:20:48 by aneves            #+#    #+#             */
/*   Updated: 2025/10/25 19:12:24 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *c, int i)
{
	unsigned char	d;

	d = (unsigned char)i;
	while (1)
	{
		if ((unsigned char)*c == d)
		{
			return ((char *)c);
		}
		if (*c == '\0')
		{
			return (NULL);
		}
		c++;
	}
	return (NULL);
}
