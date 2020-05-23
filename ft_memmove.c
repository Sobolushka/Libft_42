/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 14:46:54 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/23 21:17:47 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destin, const void *source, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (destin);
	if (!source && !destin)
		return (NULL);
	if (source < destin)
	{
		while (n--)
		{
			i++;
			((char *)destin)[n] = ((char *)source)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((char *)destin)[i] = ((char *)source)[i];
			i++;
		}
	}
	return (destin);
}
