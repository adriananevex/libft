/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:14:19 by aneves            #+#    #+#             */
/*   Updated: 2025/11/09 19:27:01 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
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

	w = ft_calloc((end - start + 1), sizeof(char));
	if (!w)
	{
		return (NULL);
	}
	i = 0;
	while (start < end)
	{
		w[i++] = s[start++];
	}
	w[i] = '\0';
	return (w);
}

static void free_word(char **result, int i)
{
	while (i > 0)
	{
		i--;
		free(result[i]);
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**result;

	if (!s)
		return (NULL);
	result = ft_calloc((count_word(s, c) + 1), sizeof(char *));
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
		{
			result[j] = word_dup(s, start, i);
			if (!result[j])
			{
				free_word(result, j);
				return (NULL);
			}
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}

#include <stdio.h>

int 	main(void)
{
	char **result;
	int	i = 0;
	
	result = ft_split("hello how are you", ' ');
	while (result[i])
	{
		printf("word %d: %s\n", i, result[i]);
		i++;
	}
	i = 0;
	return(0);
}