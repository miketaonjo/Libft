/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcloarec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:38:57 by mcloarec          #+#    #+#             */
/*   Updated: 2022/03/31 15:18:14 by mcloarec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*source;

	i = 0;
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (dst < source)
	{
		while (i < n)
		{
			dst[i] = source[i];
			i++;
		}
	}
	else
	{
		n = n - 1;
		while (i <= n)
		{
			dst[n - i] = source[n - i];
			i++;
		}
	}
	return (dst);
}
