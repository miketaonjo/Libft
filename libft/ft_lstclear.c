/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcloarec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:41:01 by mcloarec          #+#    #+#             */
/*   Updated: 2022/04/20 17:53:08 by mcloarec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst && del)
	{
		del(*lst->content);
		while (lst->next)
		{
			lst = lst->next;
			free (lst);
		}
		free (*lst);
	}
}
