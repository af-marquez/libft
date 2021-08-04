/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:36:30 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/05 11:04:32 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*new1;
	unsigned char	*new2;

	new1 = (unsigned char *)s1;
	new2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (new1[index] != new2[index])
			return (new1[index] - new2[index]);
		index++;
	}
	return (0);
}
