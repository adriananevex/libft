/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:01:21 by neves             #+#    #+#             */
/*   Updated: 2025/10/23 23:21:30 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	if (src == NULL)
	{
		return (NULL);
	}
	copy = malloc(ft_strlen(src) + 1);
	if (copy != NULL)
	{
		i = 0;
		while (src[i])
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	return (NULL);
}

/* #include <unistd.h>

int	main(void)
{
	char c[] = "Adriana";
	char *copy;

	copy = ft_strdup(c);
	write(1, copy, ft_strlen(copy));
	write(1, "\n", 1);
	free(copy);
	return (0);
} */
