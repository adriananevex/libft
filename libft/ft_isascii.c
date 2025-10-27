/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:47:20 by aneves            #+#    #+#             */
/*   Updated: 2025/10/24 20:48:39 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* #include <stdio.h>

int main(void)
{
	int x;
	x = ft_isascii(130);

	if(x == 1)
	{
		printf("x is ascii\n");
	}
	else
	{
		printf("x is not ascii\n");
	}
	return(0);
} */