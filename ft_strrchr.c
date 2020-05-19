/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 21:26:01 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/17 21:26:25 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;
	int k;

	i = 0;
	k = -1;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			k = i;
		i++;
	}
	if (ch == 0)
		k = i;
	if (k == -1)
		return (NULL);
	else
		return ((char *)str + k);
}
