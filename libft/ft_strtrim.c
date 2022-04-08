/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcloarec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:59:57 by mcloarec          #+#    #+#             */
/*   Updated: 2022/04/08 19:25:14 by mcloarec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkchar(char const *set, char c)
{
	int	i;

	i = 0;
	while(set[i] != '\0')
	{
		if (set[i] == c)
			return(1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	i;
	int	start;
	int	end;

	start = 0;
	while (ft_checkchar(set, s1[start]) == 0)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_checkchar(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start +1));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
