/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:51:16 by aneves            #+#    #+#             */
/*   Updated: 2025/11/11 21:16:43 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	unsigned char	d;
	size_t			i;

	i = 0;
	d = (unsigned char)c;
	while (str[i])
	{
		if ((unsigned char)str[i] == d)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == d)
		return ((char *)&str[i]);
	return (NULL);
}

/* #include <stdio.h>

int main(void)
{
	const char c[] = "adrianA";
	char i = 'a';
	char *result;

	result = ft_strrchr(c, i);
	printf("%C\n", *result);
	return (0);
} */
