/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:07:54 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/07 14:02:27 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*s1;

	index = 0;
	s1 = (unsigned char *)s;
	while (index < n)
	{
		s1[index] = 0;
		index++;
	}
	return (s1);
}
