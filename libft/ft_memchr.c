/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:50:09 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/07 14:02:39 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*s1;

	index = 0;
	s1 = (unsigned char *)s;
	while (index < n)
	{
		if (s1[index] == (unsigned char)c)
			return (s1 + index);
		index++;
	}
	return (NULL);
}
