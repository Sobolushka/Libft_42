/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 23:10:06 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/23 23:09:11 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long long	i;
	long long	ch;
	long long	znak;

	i = 0;
	ch = 0;
	znak = 1;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == ' '))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			znak *= -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		ch = (ch * 10) + (str[i] - 48);
		if (znak * ch > 2147483647)
			return (-1);
		if (znak * ch < -2147483648)
			return (0);
		i++;
	}
	return (znak * ch);
}
