/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 13:31:17 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/05 10:53:15 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	index;
	unsigned int	lendest;

	lendest = ft_strlen(dest);
	index = 0;
	if (size < lendest)
	{
		while (src[index])
			index++;
		return (size + index);
	}
	while (size > 0 && lendest < size - 1 && src[index])
		dest[lendest++] = src[index++];
	dest[lendest] = '\0';
	while (src[index++])
		lendest++;
	return (lendest);
}
