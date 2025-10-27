/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:14:19 by aneves            #+#    #+#             */
/*   Updated: 2025/10/25 19:51:20 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_word(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			w++;
		}
		i++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		w;
	int		start;
	int		end;
	int		wi;
	char	**str;

	i = 0;
	start = 0;
	wi = 0;
	w = count_word(s, c);
	str = malloc((w + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			if (s[i] == c)
				end = i;
			else
				end = i + 1;
			str[wi] = malloc(end - start + 1);
			if (!str[wi])
				return (NULL);
			j = 0;
			while (start + j < end)
			{
				str[wi][j] = s[start + j];
				j++;
			}
			str[wi][j] = '\0';
			wi++;
			start = i + 1;
		}
		i++;
	}
	str[wi] = NULL;
	return (str);
}
