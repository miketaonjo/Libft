/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcloarec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:33:02 by mcloarec          #+#    #+#             */
/*   Updated: 2022/04/08 18:39:12 by mcloarec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int	i;
	int	letters;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		// pour aller au début d'un nouveau mot
		if (str[i] != '\0' && str[i] == c)
			i++;
		else
		{
			letters++;
			// pour aller au prochain séparateur
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (letters);
}

static char	put_words(char *s, char c)
{
	char 	*word;
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	word = malloc(sizeof(char *) * (i + 1));
	if (!word)
		return (NULL);
	while (s[i] != '\0' && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
		

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	words;
	char	**tab;

	if (!s)
		return (NULL);
	words = count_words((char *)s, c);
	tab = malloc(sizeof(char **) * (words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		// va au début d'un nouveau mot
		while (s[i] =! '\0' && s[i] == c)
			i++;
		if (s[i] =! '\0' && s[i] != c)
		{
			// écrit le mot dans une case du tableau
			tab[j] = put_word(s);
				i++;
				j++;
			// va au prochain séparateur
			while (s[i] =! '\0' && s[i] != c)
				i++;
		}
	}
	tab[j] = NULL
	return (tab);
}
