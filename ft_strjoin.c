/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 22:26:57 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/23 19:54:38 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rez;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	rez = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (rez == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		rez[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		rez[i] = s2[j];
		i++;
		j++;
	}
	rez[i] = '\0';
	return (rez);
}
