/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 14:33:50 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/20 19:21:35 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		number(char s, const char *set)
{
	size_t i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

static const char	*ft_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (number(s1[i], set))
		i++;
	return (s1 + i);
}

static const char	*ft_finish(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1);
	while ((number(s1[i], set) || s1[i] == '\0') && i)
		i--;
	return (s1 + i);
}

static char			*wrote(char *str, const char *start, const char *finish)
{
	size_t	i;

	i = 0;
	while (start <= finish)
		str[i++] = *start++;
	str[i] = '\0';
	return (str);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char		*result;
	const char	*start;
	const char	*finish;
	size_t		size;

	if (!s1)
		return (NULL);
	start = ft_start(s1, set);
	size = 0;
	finish = ft_finish(s1, set);
	if (finish > start)
		size = finish - start + 1;
	if (!(result = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	wrote(result, start, finish);
	return (result);
}
