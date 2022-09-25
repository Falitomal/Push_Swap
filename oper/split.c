/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:13:15 by jledesma          #+#    #+#             */
/*   Updated: 2022/09/25 16:35:24 by jledesma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	*ft_calloc(int count, int size)
{
	char	*memory;
	int		i;

	i = 0;
	memory = malloc(count * size);
	if (!memory)
		return (0);
	while (i < count * size)
		memory[i++] = 0;
	return (memory);
}

/*
** Reserve using malloc an array of substrings resulting
** from separating the string using the character c as delimiter.
** The array must end with null pointer
*/
int	ft_count_words(char const *s, char c)
{
	int	i;
	int	c_words;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (!s[i])
		return (0);
	c_words = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			c_words++;
		i++;
	}
	return (c_words);
}

char	*ft_malloc_str(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)ft_calloc(i + 1, sizeof(char));
	if (!word)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		n_words;
	char	**strs;
	int		i;

	if (!s)
		return (0);
	n_words = ft_count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!strs)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			strs[i] = ft_malloc_str(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	strs[i] = 0;
	return (strs);
}
