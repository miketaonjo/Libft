/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcloarec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:47:17 by mcloarec          #+#    #+#             */
/*   Updated: 2022/04/19 18:26:09 by mcloarec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		return (ft_strjoin("-", ft_itoa(-n)));
	str = ft_strdup("0");
	if (!str)
		return (NULL);
	*str = *str + (n % 10);
	if (n >= 0 && n < 10)
		return (ft_strdup(str));
	else
		return (ft_strjoin(ft_itoa(n / 10), str));
	return (0);
}
