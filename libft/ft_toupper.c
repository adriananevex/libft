/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:12:09 by aneves            #+#    #+#             */
/*   Updated: 2025/11/10 23:17:22 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 97 && i <= 122)
	{
		i -= 32;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char c;
	int	i;
	
	c = 'a';
	i = ft_toupper(c);
	
	printf("%c\n", i);
	return (0);
}