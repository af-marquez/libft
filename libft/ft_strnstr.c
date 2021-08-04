/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:34:18 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/05 10:48:27 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	index;
	size_t	index1;

	index = 0;
	if (*find == '\0')
		return ((char *)str);
	while (str[index] != '\0' && index <= len)
	{
		index1 = 0;
		while (find[index1] == str[index + index1])
		{
			if ((index + index1) == len)
				return (0);
			if (find[index1 + 1 ] == '\0')
				return (((char *)str) + index);
			index1++;
		}
		index++;
	}
	return (0);
}
