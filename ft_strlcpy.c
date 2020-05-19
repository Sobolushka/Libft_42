/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 17:48:41 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/16 21:15:21 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t j;

	j = 0;
	while (src[j] != '\0' && (j + 1) < size)
	{
		dest[j] = src[j];
		j++;
	}
	if (j < size)
		dest[j] = '\0';
	return (ft_strlen(src));
}
