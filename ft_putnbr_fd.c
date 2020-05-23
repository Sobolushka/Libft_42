/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:20:49 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/23 23:11:40 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		number(long nbr, int fd)
{
	if (nbr > 9)
		number(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + '0', fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	long nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	number(nbr, fd);
}
