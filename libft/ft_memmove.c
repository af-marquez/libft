/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:25:01 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/05 11:02:26 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*new_src;
	char	*new_dst;

	new_src = (char *)src;
	new_dst = (char *)dst;
	if (dst == src)
		return (dst);
	if (new_src < new_dst)
	{
		while (len--)
			*(new_dst + len) = *(new_src + len);
		return (dst);
	}
	else
	{
		while (len--)
			*new_dst++ = *new_src++;
		return (dst);
	}
}
