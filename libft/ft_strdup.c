/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:37:36 by aneves            #+#    #+#             */
/*   Updated: 2025/11/01 13:42:40 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *c)
{
	int		i;
	char	*copy;

	copy = malloc(ft_strlen(c) + 1);
	if (copy != NULL)
	{
		i = 0;
		while (c[i])
		{
			copy[i] = c[i];
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