/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcloarec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:17:30 by mcloarec          #+#    #+#             */
/*   Updated: 2022/04/11 13:32:24 by mcloarec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int	len;
	int	tmp;
	char 	*str;

	len = 0;
	tmp = n;
	if (n == - 2147483648)
		return ("- 2147483648");
	str = malloc(sizeof(char *) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (n == 0)
		str[0] = '0';
		return (str);
	if (n < 0)
	{
		len = len +  1;
		n = n * -1;
		str[0] = '-';
	}
	while (tmp)
	{
		tmp = tmp / 10;
		len = len + 1;
	}
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
