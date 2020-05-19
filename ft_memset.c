/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 23:28:39 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/19 00:37:26 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destin, int c, size_t n)
{
	while (n-- > 0)
	{
		((unsigned char *)destin)[n] = (unsigned char)c;
	}
	return (destin);
}
