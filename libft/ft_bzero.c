/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:57:11 by neves             #+#    #+#             */
/*   Updated: 2025/10/23 23:20:26 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int i, size_t len)
{
	unsigned char	*c;

	c = (unsigned char *)b;
	while (len > 0)
	{
		*c = i;
		len--;
		c++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <stdio.h>

int	main(void)
{
	char	text[7] = "adriana";
	int		i;

	i = 0;
	ft_bzero(text, 5);
	printf("result:\n");
	while(i < 7)
	{
		printf("%d ", text[i]);
		i++;
	}
	printf("\n");
	return(0);
} */