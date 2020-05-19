/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:30:07 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/17 23:45:20 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count(char const *s, char c)
{
	int i;
	int j;

	if (s[0] == '\0')
		return (0);
	i = 1;
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
			i++;
		j++;
	}
	return (i);
}

char	*ting(char *dest, const char *src, unsigned int s, int n)
{
	int j;
	int count1;

	j = 0;
	count1 = 0;
	while ((src[s] != '\0') && (count1 < n))
	{
		dest[j] = src[s];
		s++;
		count1++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	**ft_free_arr(char **s1, int j)
{
	int k;

	k = 0;
	while (k < j)
	{
		free(s1[k]);
		k++;
	}
	return (0);
}

char	**wrote(char **s1, char const *big, char c, int i)
{
	int s;
	int k;
	int e;
	int j;

	j = 0;
	while (big[i] != '\0')
	{
		if (k == 0)
		{
			s = i;
			k = 1;
		}
		if (big[i] == c || big[i + 1] == '\0')
		{
			e = i;
			if (!(s1[j] = (char *)malloc(sizeof(char) * (e - s + 2))))
				return (ft_free_arr(s1, j));
			s1[j] = ting(s1[j], big, s, e - s + 1);
			j++;
			k = 0;
		}
		i++;
	}
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		count1;

	count1 = count(s, c);
	if (!(arr = (char**)malloc(count1 * sizeof(char*) + 1)))
		return (0);
	i = 0;
	if (!(arr = wrote(arr, s, c, i)))
		free(arr);
	arr[count1] = ting(arr[count1], "", 0, 0);
	return (arr);
}
