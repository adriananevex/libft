/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:35:56 by aneves            #+#    #+#             */
/*   Updated: 2025/10/24 22:22:53 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total;
	char	*copy;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	total = ft_strlen(s1) + ft_strlen(s2);
	copy = (char *)malloc(total + 1);
	if (!copy)
	{
		return (NULL);
	}
	copy[0] = '\0';
	strcat(copy, s1);
	strcat(copy, s2);
	return (copy);
}
/* 
#include <unistd.h>

int	main(void)
{
	char *s1 = "Adriana"
	char *s2 = "Elisa";
	char *copy;

	copy = ft_strjoin(s1, s2);
	write (1, copy, ft_strlen(copy));
	write (1, "\n", 1);
	free(copy);
	return (0);
} */