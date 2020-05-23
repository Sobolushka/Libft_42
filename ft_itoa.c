/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:37:06 by uturkey           #+#    #+#             */
/*   Updated: 2020/05/23 19:33:10 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		putnbr(long nbr)
{
	if (nbr > 9)
		return (putnbr(nbr / 10) + 1);
	return (1);
}

static char		*wrote(char *str, int len, int kontrol, long nbr)
{
	if (kontrol == 1)
	{
		str[0] = '-';
	}
	str[len] = '\0';
	len--;
	while (len >= kontrol)
	{
		str[len] = nbr % 10 + '0';
		if (nbr > 9)
		{
			nbr = nbr / 10;
		}
		len--;
	}
	return (str);
}

char			*ft_itoa(int nbr)
{
	int		len;
	char	*str;
	int		kontrol;
	long	v;

	kontrol = 0;
	len = 0;
	v = nbr;
	if (v < 0)
	{
		v = v * -1;
		kontrol = 1;
		len = 1;
	}
	len = len + putnbr(v);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	wrote(str, len, kontrol, v);
	return (str);
}
