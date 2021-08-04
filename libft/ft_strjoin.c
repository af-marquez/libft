/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:34:58 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/05 10:53:56 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*newstr;
	unsigned int	jindex;
	unsigned int	index;

	index = 0;
	jindex = 0;
	if (!s1 || !s2)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!newstr)
		return (NULL);
	while (s1[index])
	{
		newstr[index] = s1[index];
		index++;
	}
	while (s2[jindex])
	{
		newstr[index] = s2[jindex];
		index++;
		jindex++;
	}
	newstr[index] = '\0';
	return (newstr);
}
