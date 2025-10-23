/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:37:36 by neves             #+#    #+#             */
/*   Updated: 2025/10/23 23:27:25 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *c, unsigned int start, size_t len)
{
	size_t	atual_len;
	char	*sub;
	size_t	i;

	if (c == NULL)
		return (NULL);
	if (start >= ft_strlen(c))
		return (ft_strdup(""));
	if (len > ft_strlen(c + start))
		atual_len = ft_strlen(c + start);
	else
		atual_len = len;
	sub = (char *)malloc(atual_len + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < atual_len)
	{
		sub[i] = c[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
