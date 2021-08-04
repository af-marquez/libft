/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 14:55:58 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/06 15:20:15 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	e;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	e = ft_strlen(s1 + i);
	if (e)
	{
		while (s1[e + i - 1] && ft_strchr(set, s1[e + i - 1]))
			e--;
	}
	trim = malloc(sizeof(char) * e + 1);
	if (!trim)
		return (NULL);
	ft_strncpy(trim, (char *)s1 + i, e);
	trim[e] = '\0';
	return (trim);
}
