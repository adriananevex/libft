/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:08:01 by aneves            #+#    #+#             */
/*   Updated: 2025/10/24 20:53:46 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
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
	x = ft_isprint(20);
	
	if (x == 1)
	{
		printf("x is print\n");
	}
	else
	{
		printf("x is not print\n");
	}
	return(0);
} */