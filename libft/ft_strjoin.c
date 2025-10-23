/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:02:14 by neves             #+#    #+#             */
/*   Updated: 2025/10/23 23:21:47 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_totallen(char **str, int size, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len = total_len + ft_strlen(str[i]);
		i++;
	}
	total_len = total_len + ((size - 1) * ft_strlen(sep));
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_dest;

	i = 0;
	size_dest = 0;
	while (dest[size_dest])
	{
		size_dest++;
	}
	while (src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *c1, char const *c2)

	char *ft_strjoin(int size, char **strs, char *sep)

{
	int i;
	char *copy;

	i = 0;
	if (size == 0)
	{
		copy = malloc(1);
		copy[i] = '\0';
		return (copy);
	}
	copy = malloc(ft_totallen(strs, size, sep) + 1);
	if (copy == NULL)
		return (NULL);
	copy[0] = '\0';
	while (i < size)
	{
		ft_strcat(copy, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(copy, sep);
		}
		i++;
	}
	return (copy);
}

/* #include <unistd.h>

int	main(void)
{
	char *strs[] = {"Adriana", "Elisa", "Neves"};
	char *sep = " * ";
	char *copy;

	copy = ft_strjoin(3, strs, sep);
	write (1, copy, ft_strlen(copy));
	write (1, "\n", 1);
	free(copy);
	return (0);
} */