/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 22:54:06 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/24 23:07:50 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*list;

	if (lst && f)
	{
		new = NULL;
		while (lst)
		{
			if (!(list = ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			lst = lst->next;
			ft_lstadd_back(&new, list);
		}
		return (new);
	}
	return (NULL);
}
