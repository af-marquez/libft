/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:24:36 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/05 10:59:15 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*wordclone(char *new, char const *s, int s_index, int w_len)
{
	int	index;

	index = 0;
	while (w_len > 0)
	{
		new[index] = s[s_index - w_len];
		w_len--;
		index++;
	}
	new[index] = '\0';
	return (new);
}

char	**wordfiller(char **new, char const *s, char c, int nb_word)
{
	int	w_index;
	int	s_index;
	int	w_len;

	w_index = 0;
	s_index = 0;
	w_len = 0;
	while (s[s_index] && w_index < nb_word)
	{
		while (s[s_index] && s[s_index] == c)
			s_index++;
		while (s[s_index] && s[s_index] != c)
		{
			w_len++;
			s_index++;
		}
		new[w_index] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (!new)
			return (NULL);
		wordclone(new[w_index], s, s_index, w_len);
		w_len = 0;
		w_index++;
	}
	new[w_index] = 0;
	return (new);
}

char	word_counter(char const *s, char c)
{
	int	nb_word;
	int	index;

	index = 0;
	nb_word = 0;
	while (s[index])
	{
		if (s[index] == c)
			index++;
		else
		{
			nb_word++;
			while (s[index] && s[index] != c)
				index++;
		}
	}
	return (nb_word);
}

char	**ft_split(char const *s, char c)
{
	int		nb_word;
	char	**new;

	if (!s)
		return (NULL);
	nb_word = word_counter(s, c);
	new = (char **)malloc(sizeof(char *) * (nb_word + 1));
	if (!new)
		return (NULL);
	wordfiller(new, s, c, nb_word);
	return (new);
}
