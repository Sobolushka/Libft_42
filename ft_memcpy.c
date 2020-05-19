/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 23:43:42 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/19 00:26:39 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destin, const void *source, size_t n)
{
	if (n == 0 || destin == source)
		return (destin);
	while (n-- > 0)
	{
		((unsigned char *)destin)[n] = ((unsigned char *)source)[n];
	}
	return (destin);
}
