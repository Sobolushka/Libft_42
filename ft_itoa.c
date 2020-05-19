/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:37:06 by uturkey           #+#    #+#             */
/*   Updated: 2020/05/19 00:32:49 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		putnbr(int nbr)
{
	if (nbr > 10)
		return (putnbr(nbr / 10) + 1);
	return (1);
}

char	*wrote(char *str, int len, int kontrol, int nbr)
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
		if (nbr > 10)
		{
			nbr = nbr / 10;
		}
		len--;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*str;
	int		kontrol;

	kontrol = 0;
	len = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		kontrol = 1;
		len = 1;
	}
	len = len + putnbr(nbr);
	if (!(str = (char*)malloc(sizeof(str) * (len + 1))))
		return (NULL);
	wrote(str, len, kontrol, nbr);
	return (str);
}
