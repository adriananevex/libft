/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:25:07 by aneves            #+#    #+#             */
/*   Updated: 2025/10/24 20:59:02 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

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

/* #include <stdio.h>

int main(void)
{
	char    texto[10];

	ft_memset(texto, 'A', 9);
	texto[9] = '\0';

	printf("result = %s\n", texto);

	return 0;
} */