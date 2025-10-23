/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:04:08 by neves             #+#    #+#             */
/*   Updated: 2025/10/23 23:22:07 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *c1, const char *c2, size_t n)
{
	size_t	i;
	int		dif;

	i = 0;
	dif = 0;
	if (n <= 0)
	{
		return (0);
	}
	while ((c1[i] != '\0' || c2[i] != '\0') && (i < n))
	{
		if (c1[i] == c2[i])
		{
			i++;
		}
		else if (c1[i] != c2[i])
		{
			dif = c1[i] - c2[i];
			return (dif);
			break ;
		}
	}
	return (dif);
}

/* #include <stdio.h>

int	main(void)
{
	char s1[] = "Adriana Elisa";
	char s2[] = "Adriana Elisa Reis Alves";
	size_t	n;

	n = 20;
	printf("%s\n%s\n", s1, s2);
	ft_strncmp(s1, s2, n);
	printf("%d\n", ft_strncmp(s1, s2, n));
} */