/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcloarec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:36:02 by mcloarec          #+#    #+#             */
/*   Updated: 2022/04/07 15:46:58 by mcloarec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	unsigned char *str;
	size_t	i;

	p = (void*)malloc(nmemb * size);
	if (!p)
		return (NULL);
	str = (unsigned char *) p;
	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	p = str;
	return (p);
}
