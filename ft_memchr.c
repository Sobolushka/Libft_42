/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 15:44:31 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/19 00:25:16 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *source, int c, size_t n)
{
	while (n-- > 0)
	{
		if ((*(unsigned char *)source) == (unsigned char)c)
			return ((unsigned char *)source);
		source++;
	}
	return (NULL);
}
