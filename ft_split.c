/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 22:44:10 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/23 23:10:55 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_word(char const *s, char c)
{
	int	word;
	int	j;

	if (s[0] == '\0')
		return (0);
	j = 0;
	word = 0;
	while (s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (s[j] == c || (s[j] == '\0' && s[j - 1] != c))
			word++;
	}
	return (word);
}

static char		**ft_free_arr(char **s1, int j)
{
	int k;

	k = 0;
	while (k < j)
	{
		free(s1[k]);
		k++;
	}
	free(s1);
	return (0);
}

static char		**wrote(char const *s, char c, char **arr, size_t word)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			start = ++i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] == c || (s[i] == '\0' && s[i - 1] != c))
		{
			if (!(arr[j] = ft_substr(s, start, (i - start))))
				return (ft_free_arr(arr, word));
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

char			**ft_split(char const *s, char c)
{
	size_t	count;
	char	**arr;

	if (!s)
		return (NULL);
	count = count_word(s, c);
	if (!(arr = (char**)malloc(sizeof(char *) * count + 1)))
		return (NULL);
	return (wrote(s, c, arr, count));
}
