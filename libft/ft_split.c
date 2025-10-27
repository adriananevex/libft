/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:14:19 by aneves            #+#    #+#             */
/*   Updated: 2025/10/27 21:58:10 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_word(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		if (s[i])
		{
			w++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
	}
	return (w);
}

static char	*word_dup(const char *s, int start, int end)
{
	char	*w;
	int		i;
	
	w = malloc((end - start + 1) * sizeof(char));
	if (!w)
	{
		return (NULL);
	}
	i = 0;
	while (start < end)
	{
		w[i++] == s[start++];
	}
	w[i] = '\0';
	return (w);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			j++;
			result[j] = word_dup(s, start, i);
	}
	result[j] = NULL;
	return (result);
}

