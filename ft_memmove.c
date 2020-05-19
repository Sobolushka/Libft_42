/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 14:46:54 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/19 00:35:09 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destin, const void *source, size_t n)
{
	size_t	i;

	i = 0;
	if (source < destin)
	{
		while (n-- > 0)
		{
			((unsigned char *)destin)[n] = ((unsigned char *)source)[n];
		}
	}
	else
	{
		while (++i < n)
		{
			((unsigned char *)destin)[i] = ((unsigned char *)source)[i];
		}
	}
	return (destin);
}
