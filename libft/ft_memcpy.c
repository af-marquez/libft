/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:17:25 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/05 15:13:10 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*new_dst;
	char	*new_src;
	size_t	index;

	index = 0;
	new_dst = (char *)dst;
	new_src = (char *)src;
	if (!new_dst && !new_src && n > 0)
		return (dst);
	while (index < n)
	{
		new_dst[index] = new_src[index];
		index++;
	}
	return (dst);
}
