/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_cmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:15:46 by amarquez          #+#    #+#             */
/*   Updated: 2021/04/05 15:16:13 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((*s1 != 0) && ++index < n && *s1 == *s2)
	{
		s1++,
		s2++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - *s2);
}
