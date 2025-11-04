/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:33:37 by aneves            #+#    #+#             */
/*   Updated: 2025/11/01 14:09:00 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>
#include <stdlib.h>

static int	count_num(int n)
{
	int		i;
	long	num;

	i = 0;
	num = n;
	if (num <= 0)
	{
		i++;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num;
	long	ln;
	int		i;

	ln = n;
	i = count_num(n) - 1;
	num = malloc(count_num(n) + 1);
	if (!num)
		return (NULL);
	num[i + 1] = '\0';
	if (ln < 0)
	{
		num[0] = '-';
		ln = -ln;
	}
	else if (ln == 0)
		num[0] = '0';
	while (ln > 0)
	{
		num[i--] = (ln % 10 + '0');
		ln /= 10;
	}
	return (num);
}

/* #include <stdio.h>

int	main(void)
{
	int n;
	char *c;
	
	n = -152589;
	c = ft_itoa(n);
	printf("%s\n", c);
	free(c);
	return 0;
} */